#include<stdio.h>
int main(){
	int n,c=0;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				if(a[i][i]==1){
					c+=1;
				}
				else{
					c+=0;
				}}
				if(i!=j){
				
					if(a[i][j]==0){
						c+=1;
					}
					else{
						c+=0;
					}
				}	
			}
		}
	
	if(c==n*n){
		printf("It is a identity matrix");
	}
	else{
		printf("It is not a identity matrix");
	}
}
