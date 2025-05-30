
#include <stdio.h>
#include<unistd.h>
 
int main() {
   int fork();
	pritf("Hello world\n");
         
    return 0;
}

//Output: 
 Hello world
 Hello world


//////////

#include <stdio.h>
#include<unistd.h>
 
int main() {
   int f=fork();
	//pritf("01. Hello world\n");
	if(f==0)
	{
		printf("I am parent process! \n");
	}else{
		printf("I am child process \n");
	}
         
    return 0;
}
// Output: 
I am child process
I am parent process!

/////// 
//print numbers from 1 to 10 and
// 1 to 5 should be print by child process and
// form 6 to 10 should be parent process
// calculate summation of those numbers
#include <stdio.h>
#include<unistd.h>
 
int main() {
   int id =fork();
   int n;
	//pritf("01. Hello world\n");
	if(id==0)
	{	
		 n=1;
	}else{
		 n=6;
	}
	
	for(int i=n;i<n+5;i++)
	{
		printf("\n");
	}
         
    return 0;
}

