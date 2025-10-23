#include <stdio.h>

#define DISCOUNT_RATE 0.1

int main() {
	double price = 0;
	double finalPrice = 0;
	
	printf("Enter the original price: ");
	scanf("%lf", &price);
	finalPrice = (100-DISCOUNT_RATE)*price/100;
	printf("Final price after discount is %.2lf \n", finalPrice);
	return 0;
}
