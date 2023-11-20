#include<stdio.h>
int avg(int n,int a[]);
int main(){
	int x;
	float average;
	scanf("%d",&x);
	int arr[x];
//	for(int i=0;i<x;i++){
//		scanf("%d",&arr[i]);
//	}
	average=avg(x,arr);
	printf("%f",average);
}


int avg(int n,int a[]){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return (sum/float(n));
	
}
