#ifndef MYHEAD_H_
#define MYHEAD_H_

#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>

#define MAXLINE         4096
#define FILE_MODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP)

#endif
