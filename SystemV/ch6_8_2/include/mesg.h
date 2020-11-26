#ifndef MESG_H_
#define MESG_H_

#include"myhead.h"

#define MAXMESGDATA (MAXLINE-2*sizeof(long))
#define MQ_KEY1 1234L

#define MESHDRSIZE (sizeof(struct mymsg) - MAXMESGDATA)

struct mymsg
{
        long len;
        long type;
        char data[MAXLINE];
};

ssize_t mesg_send(int, struct mymsg*);
//void Mesg_send(int, struct mymsg*);
ssize_t mesg_recv(int, struct mymsg*);
//ssize_t Mesg_recv(int, struct mymsg*);
void sig_chld(int signo);

#endif
