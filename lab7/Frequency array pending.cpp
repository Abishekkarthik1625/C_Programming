#include<stdio.h>
int main(){
	int n,k=0,count=0;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//for(int l=0;l<i+1;l++){
			
			//k=a[j];
			if(b[i]==a[i+j]){
				count+=1;
		}
	}
	//printf("%d",count);
	printf("frequency of %d is %d\n",a[i],count);
	count=0;
}}
