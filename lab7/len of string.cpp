#include<stdio.h>
#include<string.h>
int main(){
	int n,l=0;
	scanf("%d",&n);
	char ch[n];
	scanf("%s",ch);
	
	for(int i=0;ch[i]!='\0';i++){
		l++;
	}
	printf("%d is the length of the string",l);
}
