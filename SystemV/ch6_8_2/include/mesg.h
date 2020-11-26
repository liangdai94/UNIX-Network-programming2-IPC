#ifndef MESG_H_
#define MESG_H_

#include"myhead.h"

#define MQ_KEY1 1234L
#define MQ_KEY2 2345L
#define MSG_R 0400
#define MSG_W 0200
#define SVMSG (MSG_R | MSG_W | MSG_R >> 3 | MSG_W >> 3)

#define MAXMESGDATA (MAXLINE-2*sizeof(long))
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
