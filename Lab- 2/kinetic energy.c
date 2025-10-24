#include<stdio.h>
int main(){
	
	float m,v,KE;
	printf("The mass in kg ");
	scanf("%f", &m);
	printf("The velocity in m/s");
	scanf("%f", &v);
	
	KE=0.5*m*v*v;
	printf("The kinetic energy in joule %f" ,KE);
	return 0;
}
