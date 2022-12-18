#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	pid_t pid,p,c;
	p=fork();
	c=fork();
	pid=getpid();
	if(p<0)
	{
		fprintf(stderr,"fork failer");
		return 0;
	}
	printf("output of fork id:%d\n",p);
	printf("process id is:%d\n",pid);
	return 1;
}
