#include"mesg.h"

void client(int, int);

int main(int argc, char **argv)
{
    int readid, writeid;

    writeid = msgget(MQ_KEY1, 0);
    readid = msgget(IPC_PRIVATE, SVMSG | IPC_CREAT);

    client(readid, writeid);

    msgctl(readid, IPC_RMID, NULL);
    return 0;
}
