#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, root;
	printf("Enter a=");
	scanf("%f",&a);
	printf("Enter b=");
	scanf("%f",&b);
	printf("Enter c=");
	scanf("%f",&c);
	
	root=b*b-4*a*c;
	
	if (root>=0){
		printf("x1= %.2f \n", (-b+sqrt(root))/(2*a));
		printf("x2= %.2f \n", (-b-sqrt(root))/(2*a));
	}
	return 1;
}
