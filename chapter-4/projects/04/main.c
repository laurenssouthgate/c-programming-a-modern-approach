#include <stdio.h>

int main(void)
{
	int n, i, j, k, l, m;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);

	m = n % 8;
	n = n / 8;
	l = n % 8;
	n = n / 8;
	k = n % 8;
	n = n / 8;
	j = n % 8;
	n = n / 8;
	i = n % 8;

	printf("In octal, your number is: %d%d%d%d%d\n", i, j, k, l, m);

	return 0;
}
