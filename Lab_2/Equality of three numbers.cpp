#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	if(a==b && b==c && c==a)
	{
		printf("Equal");
	}
	else{
		printf("Not Equal");
	}
}
