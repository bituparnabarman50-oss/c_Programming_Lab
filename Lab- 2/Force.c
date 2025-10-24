#include<stdio.h>
int main()
{
	float m,a,force;
	printf("The mass is in kg");
	scanf("%f",&m);
	printf("The accelaration is in m/s");
	scanf("%f",&a);
	
	force=m*a;
	printf("The force is in N %f",force);
	return 0;
}
