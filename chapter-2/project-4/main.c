#include <stdio.h>

#define TAX_PERCENTAGE 0.05f

int main(void)
{
	float amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	printf("With tax added: £%.2f", amount += (amount * TAX_PERCENTAGE));

	return 0;
}
