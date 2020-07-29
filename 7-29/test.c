/*
#include<stdio.h>
#include <unistd.h>

int main()
{
while(1)
{
printf("学习学习\n");
sleep(1);
}
return 0;
}
*/


#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("--------begin-------\n");
    pid_t ret=fork();
    if (ret<0)
    {
        perror("fork");
        return 0;
    }
    else if(ret>0)
    {
        while(1)
        {
            printf("父进程\n");
            sleep(1);
        }
    }

    else
    {
        while(1)
        {
            printf("子进程\n");
            sleep(1);
        }
    }
    return 0;
}

