#include <stdio.h>

int main(void)
{
	int i = 8;
	int j = 5;

	printf("%d\n", i % j);
	printf("%d\n", -i % j);
	printf("%d\n", i % -j);
	printf("%d\n", -i % -j);

	return 0;
}
	
