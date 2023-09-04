#include<stdio.h>
int main(){
	float km,m,cm,mm;
	scanf("%f",&km);
	m=1000*km;
	cm=100*m;
	mm=10*cm;
	printf("%f kms in m,cm,mm are %f m,%f cm and %f mm",km,m,cm,mm);
	return 0;
}
