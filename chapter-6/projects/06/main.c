#include <stdio.h>

int main(void)
{
	int n, sq;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (int i = 1; i * i <= n; i += 2) {
		printf("%d\n", i * i);
	}

	return 0;
}
