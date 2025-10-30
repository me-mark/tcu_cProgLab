#include <stdio.h>

int main() {
	int numCustomer, i=1, unit;
	float currentBill = 0, avgBill=0, highestBill=0, lowestBill=0, totalBill = 0;
	printf("Enter number of customer: ");
	scanf("%d", &numCustomer);
	
	do {
		currentBill = 0;
		printf("Enter the number of electricity units consumed: ");
		scanf("%d", &unit);

		if (unit >0) {
			if (unit <100) {
				currentBill+= unit*0.5;				
			} else {
				if (unit<300) {
					currentBill+=100*0.5+(unit-100)*0.75;
				} else {
					if (unit<600) {
						currentBill+=100*0.5+200*0.75+(unit-300)*1.2;
					} else {
						currentBill+=100*0.5+200*0.75+300*1.2+(unit-600)*1.5;
					}
				}
			}
			 
		}			
		currentBill +=20;
		
		if (currentBill >500){
			currentBill=currentBill*1.1;
		}
		
		printf("Total bill: %.2f \n", currentBill);
		
		if (highestBill < currentBill) {
			highestBill = currentBill;
		}
		if (i==1) {
			lowestBill = currentBill;
		}
		if (lowestBill > currentBill) {
			lowestBill = currentBill;
		}
		totalBill+=currentBill;
		i++;
	} while (i <= numCustomer);
	avgBill = totalBill/numCustomer;
	printf("Average bill amount: %.2f \n", avgBill);
	printf("Highest bill amount: %.2f \n", highestBill);
	printf("Lowest bill amount: %.2f \n", lowestBill);
}

