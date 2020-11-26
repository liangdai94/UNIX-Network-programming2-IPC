#include"mesg.h"

void server(int readfd, int writefd)
{
    ssize_t len;
    struct mymsg msg;
    FILE* fp = NULL;
    char * ptr = NULL;

    msg.type = 0;
    signal(SIGCHLD, sig_chld);

    for(;;)
    {
        msg.type = 1;
        len = mesg_recv(readfd, &msg);
        msg.data[len] = '\0';
        printf("recv %s\n", msg.data);

        if(NULL == (ptr = strchr(msg.data, ' ')))
        {
                printf("error geshi\n");
                continue;
        }
        ptr++;

        writefd = atoi(msg.data);
        if(fork() == 0)
        {
            if((fp = fopen(ptr, "r")) == NULL)
            {
                snprintf(msg.data + len, sizeof(msg.data) - len, ": can not open, %s\n", strerror(errno));
                msg.len = strlen(ptr);
                memmove(msg.data, ptr, msg.len);
                mesg_send(writefd, &msg);
                continue;
            }

            while(NULL!= fgets(msg.data, MAXMESGDATA, fp))
            {
                msg.len = strlen(msg.data);
                mesg_send(writefd, &msg);
            }
            fclose(fp);
            msg.len = 0;
            mesg_send(writefd, &msg);
            exit(0);
        }
    }
}
