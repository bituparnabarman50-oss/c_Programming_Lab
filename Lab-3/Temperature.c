//calculate tempreture.
#include<stdio.h>
int main()
{
	int tempt;
	printf("Enter the machine temperature in celsius:");
	scanf("%d",&tempt);
	printf("The machine temperature in celsius is:%d\n",tempt);
	if(tempt>60 && tempt<=80)
	{
		printf("The machine temperature is in safe range");
	}
	else
	{
		printf("The machine temperature is in danger range");
	}
	return 0;
}

