#include <stdio.h>
//convertToCelcius()
float ToCelcius(float fahrenheit){
	return(5.0/9.0) * (fahrenheit-32.0);
}

int main(){
	//set the fahrenheit value
	float f_value = 98.8;
	
	//  call the fuction with the fahrehneit value
	float result = ToCelcius(f_value);
		printf("fahrenheit to celcius:%.2f\n",f_value);
	// print the fahrehneit value
	printf("convert fahrenheit to celcius:%.2f\n",result);
return 0;	
}