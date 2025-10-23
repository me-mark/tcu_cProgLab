#include <math.h>
#include <stdio.h>

int main() {
	double number;
	double sqr = 0;
	
	printf("Enter a number: ");
	scanf("%lf", &number);
	sqr = sqrt(number);
	printf("Square of %2lf is %2lf \n", number, sqr);
	return 0;
}	
