#include<stdio.h>
int main()
{
	float vib_amp,freq;
	printf("enter the vibration amplitude in mm:");
	scanf("%f",&vib_amp);
	printf("enter the frequency in Hz:");
	scanf("%f",&freq);
	if(vib_amp>0.5 && (freq>=20 && freq<=50))
	{
		printf("HIGH RISK!!!");
	}
	else if(vib_amp>0.5 || freq>60)
	{
		printf("MEDIUM RISK!!");
	}
	else
	{
		printf("LOW RISK!");
	}
	return 0;
}
