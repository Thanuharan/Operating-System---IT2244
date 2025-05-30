#include <stdio.h>

int main(){

	int n;
	printf("Enter a number between (1-7): ");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
		printf("Sunday \n");
		break;
		case 2:
		printf("Monday \n");
		break;
		case 3:
		printf("Tuesday \n");
		break;
		case 4:
		printf("Wednesday \n");
		break;
		case 5:
		printf("Thursday \n");
		break;
		case 6:
		printf("Friday \n");
		break;
		case 7:
		printf("Saturday \n");
		break;

		default:
		printf("Invalid Input \n");
		break;
	}

	int x;
	printf("Enter  Your date of birth: ");
	scanf("%d",&x);

	int a=x%10;
	int b=x/10;
	int c=a+b;

	switch(c){
	case 1:printf("Lucky");
	break;
	case 2:printf("Carefully do your work");
	break;
	case 3:printf("Stronger");
	break;
	case 4:printf("Happy");
	break;
	case 5:printf("Can get help	\n");
	break;
	case 6:printf("Doubt	\n");
	break;
	case 7:printf("Sad	\n");
	break;
	case 8:printf("Like	\n");
	break;
	case 9:printf("Courage	\n");
	break;

	 default: printf("Invalid input");
	 break;

	}
	return 0;
}
