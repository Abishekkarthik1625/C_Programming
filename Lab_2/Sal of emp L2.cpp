#include<stdio.h>
int main()
{
	int bs,tr,da,hra;
	scanf("%d %d",&bs,&tr);
	da=(bs*44)/100;
	
	if(tr==1){
		hra=(bs*24)/100;
		printf("%d is the total salary",bs+da+hra);
	}
	else if(tr==2){
		hra=(bs*16)/100;
		printf("%d is the total salary",bs+da+hra);
	}
	return 0;
}
