//A C program to perform all arithematic operations

#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The sum of two numbers %d and %d is %d\n",a,b,a+b);
	printf("The difference of two numbers %d and %d is %d\n",a,b,a-b);
	printf("The product of two numbers %d and %d is %d\n",a,b,a*b);
	printf("The division of two numbers %d and %d is %f",a,b,float(a)/b);
}
