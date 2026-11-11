#include<stdio.h>
//calculate ElectricBill;
float calculateElectricBill(float units)
{
	float bill;
	if(units<=100)
	{
		bill = units*10;
	}
	else if(units<=200)
	{
		bill = (100*15) + (units-100)*15;
	}
	else
	{
	bill = (100*10)+ (100*15)+ (units-200)*20;	
	}
	return bill;
}
//function to calculate total Bill
float calculatetotalBill(float units, float total)
{
	return total;
}
//main function
int main()
{
	float units;
	
	float total;
	
	printf("Enter units consumed:");
	scanf("%f", &units);
	total= calculateElectricBill(units);


//display results
{	
printf("TotalElectricity Bill = ksh %.2f\n",total);
}
return 0;
}