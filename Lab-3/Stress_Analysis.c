#include<stdio.h>
int main(){
float Applied_stress,Material_yield_strength,fos;
printf("Enter the applied stress in Mpa:");
scanf("%f",&Applied_stress);
printf("Enter the material yield strength in Mpa:");
scanf("%f",&Material_yield_strength);

fos= Material_yield_strength/Applied_stress;

if(fos>=2.0){
printf("It is a safe design");
}
else if(fos>=1.5 && fos<2.0){
printf("Acceptable with monitoring");
}
else{
printf("Danger-redesign needed");
}
return 0;
}
