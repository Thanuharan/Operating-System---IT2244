
#include <stdio.h>

int main() {

  int age=0;
  printf("Enter your age: ");
  scanf("%d",&age);

  if(age>=18 && age<=100)
  {
	  printf("\n You are eleigible for voting,you can vote \n");
  }
  else
  {
	  printf("\n you  are not eleigible for voting \n");
  }
return 0;


}

