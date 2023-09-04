#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d\n%d",&a,&b);
	c=a;a=b;b=c;
	printf("Value of swapped a and b is %d and %d",a,b);
}
