#include<stdio.h>
int main(){
int choice;
printf("1.100MB @ 50 KES\n");
printf("2.500MB @ 20 KES\n");
printf("3.1GB @350 KES\n");
printf("4.2GB @ 600 KES\n");
printf("Enter your choice (1-4):");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("selected 100MB-50 KES\n");

case 2:
printf("selected 500MB-20 KES\n");

case 3:
printf("selected 1GB-350 KES\n");
case 4:
printf("selected 2GB-600 KES\n");
default:
printf("Invalid choice\n");
}
return 0;
}
