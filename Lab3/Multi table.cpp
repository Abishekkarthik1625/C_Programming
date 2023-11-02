#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	for(int i=1;i<11;i++){
		printf("%d x %d is %d\n",i,num,i*num);
	}
	return 0;
}
