#include <stdio.h>

int main(void)
{
	int numerator, denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	int n = numerator;
	int m = denominator;

	while (n > 0) {
		int r = m % n;
		m = n;
		n = r;
	}

	printf("In lowest terms: %d/%d", numerator / m, denominator / m);

	return 0;
}
