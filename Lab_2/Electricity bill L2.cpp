#include<stdio.h>
int main()
{
	int u;
	scanf("%d",&u);
	
	if(u>=0 && u<=100){
		printf("%d is the total bill",u*2);
	}
	else if(u>=101 && u<=300){
		printf("%d is the total bill",u*3);
	}
	else if(u>300){
		printf("%d is the total bill",u*5);
	}
	else
	{
		printf("Enter an valid input");
	}
	return 0;
}
