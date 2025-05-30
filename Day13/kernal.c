#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("\n Hello World");
	int f=fork();
	int p=getpid();
	
	printf("\n the pid is %d",p);
	printf("\n the pid is %d",f);
	
	return 0;
}