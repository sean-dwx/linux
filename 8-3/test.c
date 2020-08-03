/*
#include <stdio.h>
#include <unistd.h>

int main()
{
while(1)
{
printf("我是父进程\n");
sleep(2);
}





return 0;
}
*/



/*
#include <stdio.h>
#include <unistd.h>

int main()
{
int ret=fork();
printf("hello proc: %d!,ret: %d\n",getpid(),ret);
sleep(1);
return 0;
}
*/


#include <stdio.h>
#include <unistd.h>

int main()
{
    int ret = fork();
    if(ret<0)
    {
        printf("失败\n");
    }
    else if(ret == 0)  
    {
       // while(1)
        {    
            printf("我是子进程 : %d!  %d!, ret: %d\n", getpid(),  getppid(), ret);
           // sleep(1);
            sleep(30);
        }
    }
    else
    {
        while(1)
        {
            printf("我是父进程 : %d!  %d!, ret: %d\n",getpid(), getppid(), ret);
            sleep(30);
        }
    }


    return 0;
}
