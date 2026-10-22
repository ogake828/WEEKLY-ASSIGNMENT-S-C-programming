#include<stdio.h>
int main() {
int arr[7]={1,2,3,4,5,6,7};
int i, sum = 0, avrg;
for(i=0;i<7;i++){
	printf("%d \n",arr[i]);
	
	sum = sum + arr[i];}
	avrg = sum / 7;
	
	printf("\nTotal: %d", sum);
	printf("\nAverage: %d", avrg);
	
	

return 0;
}