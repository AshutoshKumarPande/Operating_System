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
		printf("in child process:%d\n",getpid());
	}
	else{
		wait(NULL);
		printf("In parent process:%d\n",getpid());

	}
	return 0;
}
