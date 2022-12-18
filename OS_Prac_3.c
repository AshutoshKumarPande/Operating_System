#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
int a;

printf("\n The kernal version is: \n");
system("cat /proc/sys/kernel/osrelease");
printf("\n configured total and free memory \n");
system("cat /proc/meminfo | awk 'NR==1,NR==3{print}'\n");
return 0;

}
