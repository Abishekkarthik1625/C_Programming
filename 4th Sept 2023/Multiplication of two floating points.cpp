#include<stdio.h>
int main(){
	float a,b,multif;
	scanf("%f\n%f",&a,&b);
	multif=a*b;
	printf("Float and integer product of two numbers %f and %f are %f and %d",a,b,multif,int(multif));
	
}
