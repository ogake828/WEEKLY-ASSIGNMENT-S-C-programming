#include<stdio.h>
//function prototype
float calculateFare(int distance);

 int main()
{
float total;
int distance;

printf("Enter the distance in kilometres:");
scanf("%d", &distance);
//function call
total = calculateFare(distance);

printf("\nTotal fare: Ksh %.2f", total);
	
return 0;
}

//function definition
float calculateFare(int distance)
{
float fare;
fare = distance * 50;
return fare;	
}