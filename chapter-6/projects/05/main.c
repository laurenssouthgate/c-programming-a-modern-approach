#include <stdio.h>

int main(void)
{
	int n, last_digit;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("The reversal is: ");
	do {
		last_digit = n % 10;
		printf("%d", last_digit);
		n /= 10;
	} while (n > 0);

	return 0;
}
