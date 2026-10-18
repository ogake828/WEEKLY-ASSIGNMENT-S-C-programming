#include<stdio.h>
int main(){
int age;
float income;
printf("%\nBank loan income%\n");
printf("Enter your age:");
scanf("%d",&age);
printf("Enter your annual income");
scanf("%f",&income);
if(age>=21 &&income>=21000)
{
printf ("Cogratulation you qualify for loan,\n");
}
else("Unfortunately you don't qualify for a loan,\n");
return 0;
}


    