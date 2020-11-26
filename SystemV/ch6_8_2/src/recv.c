#include"mesg.h"

ssize_t mesg_recv(int fd, struct mymsg *msg)
{
        ssize_t n = 0;

        do
        {
                n = msgrcv(fd, &(msg->type), MAXMESGDATA, msg->type, 0);
        }while(n == -1 && errno == EINTR);

        if(n < 0)
                perror("recv error");
        msg->len = n;
        return n;
}
