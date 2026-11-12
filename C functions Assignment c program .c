#include<stdio.h>
//function calculateSubtotal()
float calculateSubtotal(float p1,float p2,float p3,float p4,float p5)

//p1,p5 represents products;
{
return 	p1,p2,p3,p4,p5;	
}
 //calculate discount
 float calculateDiscount(float subtotal)
 {
 	if(subtotal >= 10000)
 		return subtotal*0.10;
 	else if (subtotal>= 5000)
 		return subtotal * 0.05;
 	
 	else
	 return 0;
 }
 //final amount = sbtotal- discount
 float calculateFinalAmount(float subtotal, float discount)
 {
 	return subtotal;
 }
 int main()
{
    float p1, p2, p3, p4, p5;
    float subtotal, discount, finalAmount;

    printf("Enter prices of five products:\n");

    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);
    scanf("%f", &p4);
    scanf("%f", &p5);

    subtotal = calculateSubtotal(p1, p2, p3, p4, p5);

    discount = calculateDiscount(subtotal);

    finalAmount = calculateFinalAmount(subtotal, discount);
//display the result
    printf("Subtotal: KSh %.2f\n", subtotal);
    printf("Discount: KSh %.2f\n", discount);
    printf("Final Amount: KSh %.2f\n", finalAmount);

    return 0;
}