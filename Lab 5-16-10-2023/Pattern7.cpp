#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int s=0;s<n-i-1;s++){
			printf(" ");
		}
		for(int j=0;j<i+1;j++){
			printf("*");
			printf(" ");
		}
		printf("\n");
}}
