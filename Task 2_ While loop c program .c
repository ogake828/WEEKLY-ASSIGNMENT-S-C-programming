#include<stdio.h>
int main() {
	float balance,amount;
	
	printf("Enter initial balance:");
	scanf("%f", &balance);
	
	//loop as iong as balance is greater than 0
	
	
	while( balance> 0) {
		printf("\nEnter amount to withdraw:");
		scanf("%f", &amount);
		
		balance=balance-amount; // deduct
		
		
		if(balance>0){
			printf("withdrawal successful.new balance: %.2f\n",balance);
		}
		else{
			printf("withdrawal successful.balance: %.2F\n" ,balance);
			printf("Account is now zero or negative.transaction ended.");
		}
		}
		
	return 0;
	}