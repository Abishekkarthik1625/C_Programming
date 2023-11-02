#include<stdio.h>
int main(){
	int num,count=0;
	scanf("%d",&num);
	while(num!=0){
		num/=10;
		++count;
	}
	printf("Length is %d",count);
	return 0;
}
