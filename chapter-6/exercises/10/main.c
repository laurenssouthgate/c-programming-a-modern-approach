#include <stdio.h>

int main(void)
{
	// Continue example
	for (int i = 10; i > 0; i--) {
		if (i % 2 != 0) continue;
		printf("%d ", i);
	}

	// Go to equivalent
	for (int i = 10; i > 0; i--) {
		if (i % 2 != 0) goto end;
		printf("%d ", i);
		end:
	}

	return 0;
}
