#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>
int main()
{
	pid_t pid,p,c;
	p=fork();
	pid=getpid();
	if(p<0)
	{
		fprintf(stderr,"fork failer");
		return 1;
	}
	else if(p==0)
	{
		printf("in child process\n");
		printf("my child process if is:%d\n",getpid());
	}
	else{
		printf("in parent process\n ");
		printf("My parent process id is:%d\n",getppid());

	}
	return 0;
}
