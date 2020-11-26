#include"mesg.h"

void client(int readfd, int writefd)
{
    ssize_t len;
    struct mymsg msg;
    char * ptr = NULL;

    snprintf(msg.data, MAXMESGDATA, "%d", readfd);
    len = strlen(msg.data);

    ptr = msg.data + len + 1;
    msg.data[len] = ' ';

    fgets(ptr, MAXMESGDATA - len - 1, stdin);
    len = strlen(msg.data);

    if(msg.data[len - 1])
    {
            len--;
    }
    msg.len = len;
    msg.type = 1;

    len = mesg_send(writefd, &msg);

    sleep(1);

    while((len = mesg_recv(readfd, &msg)) > 0)
    {
            write(STDOUT_FILENO, msg.data, len);
    }
    sleep(10);
    return;
}
