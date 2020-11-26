#include"mesg.h"

void server(int, int);

int main(int argc, char**argv)
{
    int msqid;

    msqid = msgget(MQ_KEY1, SVMSG | IPC_CREAT);
    server(msqid, msqid);

    return 0;
}
