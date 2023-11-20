#include<stdio.h>
union student{
		char name[100];
		int m[5];
		int rollno;
	}s;
int main(){

	int sum=0;
	float avg;
	gets(s.name);
	for(int i=0;i<5;i++){
	
	scanf("%d",&s.m[i]);
	sum+=s.m[i];
	
	}
	scanf("%d",&s.rollno);
	//printf("%d\n",sum);
	avg=sum/5.0 ;
	printf("%f",avg);
	
	
}
