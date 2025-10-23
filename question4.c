#include <stdio.h>

float toKevin(float inputC);

int main() {
	float inputC=0;
	
	printf("Enter temperature in Celcius ");
	scanf("%f", &inputC);
	printf("Converted value in Kevin %.4f \n", toKevin(inputC));
	return 1; 
}

float toKevin(float inputC) {
	return inputC + 237.15;
}
