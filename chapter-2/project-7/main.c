#include <stdio.h>

int main(void)
{
	int amount;

	printf("Enter your amount: ");
	scanf("%d", &amount);

	printf("£20 notes: %d\n", amount / 20);
	
	amount -= (amount / 20) * 20;
	
	printf("£10 notes: %d\n", amount / 10);

	amount -= (amount / 10) * 10;
	
	printf("£5 notes: %d\n", amount / 5);

	amount -= (amount / 5) * 5;

	printf("£1 coins: %d\n", amount / 1);

	return 0;
}
