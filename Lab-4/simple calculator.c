#include<stdio.h>
int main(){
	int a,b,c ,result;
	printf("1.addition 2.substraction 3.divition 4.multiplication");
	printf("enter number a:");
	scanf("%d",&a);
	
	printf("enter number b:");
	scanf("%d",&b);
	
	printf("enter number between 1 to 4");
	scanf("%d",&result);
	switch(result){
	
	
	case 1:
	c=a+b;
	printf("addition is %d",c);
	break;
	
	case 2:
	c=a-b;
	printf("substraction is %d",c);
	break;
	
	case 3:
	c=a/b;
	printf("division is %d",c);
	break;
	
	case 4:
	c=a*b;
	printf("multiplication is %d",c);
	break;
	
	default:
	printf("error");}
	return 0;}

