#include<stdio.h>
int main(){
	float bs,DA,HRA,total;
	scanf("%f",&bs);
	DA=(0.45*bs);
	HRA=(0.16*bs);
	total=bs+DA+HRA;
	printf("Salary of the employee is %f",total);
}
