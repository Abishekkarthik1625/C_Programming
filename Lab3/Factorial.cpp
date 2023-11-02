#include<stdio.h>
int main(){
	int num,fact=1;
	scanf("%d",&num);
	for(int i=num;i>0;i--){
		fact=fact*i;
	}
	printf("%d is factorial of %d",fact,num);
	return 0;
}
