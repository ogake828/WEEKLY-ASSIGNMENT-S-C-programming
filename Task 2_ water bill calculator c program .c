#include<stdio.h>
int main() {
float units,bill;
printf(" Enter water units consumed:");
scanf("%f", &units);
if(units>=30);
{
bill-units *20;
}
if(units<=60);
{
bill-units*25;
}
if(bill=units*30);
printf("Total water bill:%.2fKES\n",bill);
return 0;
}