#include<stdio.h>
int main(){
	int n,l=0,k=0;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=0;
	}
	for(int i=0;i<n;i++){
		c[i]=0;
	}
	for(int j=0;j<n;j++){
		if(a[j]%2==1){
			b[l]=a[j];
			l+=1;
		}
		else{
			c[k]=a[j];
			k+=1;
		}
	}
	for(int i=0;i<l;i++){
		printf(" %d ",b[i]);
	}
	for(int i=0;i<k;i++){
		printf(" %d ",c[i]);
	}
}
