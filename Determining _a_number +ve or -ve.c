#include<stdio.h>
int main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a>0){
printf("The number is positive");
}
if(a<0){
printf("The number is negative");
}
if(a==0){
printf("The number is zero");
}
return 0;

}
