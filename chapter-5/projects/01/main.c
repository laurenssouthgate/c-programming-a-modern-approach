#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%3d", &n);

	if (n < 10) {
		printf("The number %d has 1 digit\n", n);
	} else if (n < 100) {
		printf("The number %d has 2 digits\n", n);
	} else {
		printf("The number %d had 3 digits\n", n);
	}

	return 0;
}
