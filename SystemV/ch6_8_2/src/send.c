#include"mesg.h"

ssize_t mesg_send(int fd, struct mymsg* msg)
{
        return (msgsnd(fd, &(msg->type), msg->len, 0));
}
