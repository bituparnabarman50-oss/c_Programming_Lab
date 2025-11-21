#include<stdio.h>
int main()
{
float a;
printf("Enter the units consumed:");
scanf("%f",&a);
if(a>=0 && a<=100)
{
float bill_1=a*1.5;
printf("The total bill is:Rs%f",bill_1);
}
else if(a>=101 && a<=200)
{
float bill_2=((a-100)*2)+150;
printf("The total bill is:Rs%f",bill_2);
}
else if(a>=201 && a<=300)
{
float bill_3=((a-200)*3)+350;
printf("The total bill is:Rs%f",bill_3);
}
else
{
float bill_4=((a-100)*5)+650;
printf("The total bill is:Rs%f",bill_4);
}
return 0;
}
