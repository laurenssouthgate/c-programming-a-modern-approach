#include <stdio.h>

int main(void)
{
	float income;

	printf("Enter amount of taxable income: ");
	scanf("%f", &income);

	printf("Amount of tax: ");

	if (income < 750) {
		printf("$%.2f", 0.01 * income);
	} else if (income >= 750 && income < 2250) {
		printf("$%.2f", 7.5 + 0.02 * (income - 750));
	} else if (income >= 2250 && income < 3750) {
		printf("$%.2f", 37.5 + 0.03 * (income - 2250));
	} else if (income >= 3750 && income < 5250) {
		printf("$%.2f", 82.5 + 0.04 * (income - 3750));
	} else if (income >= 5250 && income < 7000) {
		printf("$%.2f", 142.5 + 0.05 * (income - 5250));
	} else {
		printf("$%.2f", 230 + 0.06 * income - 7000);
	}

	printf("\n");

	return 0;
}
