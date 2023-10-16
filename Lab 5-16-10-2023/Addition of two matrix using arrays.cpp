#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d\n",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\n",a[i][j]+b[i][j]);
		}
	}
		
}

