#include<stdio.h>
int main(){
	
	int a,b,c;
	scanf("%d\n%d\%d",&a,&b,&c);
	if(a>b && a>c)
	{
	printf("%d is the greatest among these three numbers",a);
	}
	if(b>a && b>c)
	{
	printf("%d is the greatest among these three numbers",b);
	}
	else
	{
	printf("%d is the greatest among these three numbers",c);	
	}
	return 0;
}
