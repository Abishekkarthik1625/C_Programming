#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char ch[n],ch2[n];
	scanf("%s",ch);
	
	for(int i=0;ch[i]!='\0';i++){
		ch2[i]=ch[i];
	}
	printf("%s is the length of the string",ch2);
}
