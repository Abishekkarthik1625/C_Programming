#include<stdio.h>
int main(){
	int a,b;
	scanf("%d\n%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped numbers are %d and %d",a,b);
	return 0;
	
}
