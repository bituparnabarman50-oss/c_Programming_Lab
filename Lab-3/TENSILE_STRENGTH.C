#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the tensile strength of material 1:");
	scanf("%d",&a);
	printf("Enter the tensile strength of material 2:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("The tensile strength of material 1 is greater");
	}
	else if(b>a)
	{
		printf("The tensile strength of material 2 is greater");
	}
	else
	{
		printf("Both materials have the same tensile strength");
	}
	return 0;
}
