#include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 2;

	printf("%d\n", i < j ? -1 : i == j ? 0 : 1);

	return 0;
}
