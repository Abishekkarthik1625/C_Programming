#include<stdio.h>
int main(){
	int num,sum=0;
	scanf("%d",&num);
	sum+=num%10;
	while(num!=0){
		num/=10;
		sum+=num%10;
	}
	printf("Sum of digits of the number is %d",sum);
	return 0;
}
