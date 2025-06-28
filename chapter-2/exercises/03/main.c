#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d", &a);
	scanf(" %d", &b);
	
	printf("%d, %d", a, b);

	int c, d, e, f, g, h;

	scanf("%d-%d-%d", &c, &d, &e);
	scanf("%d -%d -%d", &f, &g, &h);

	printf("%d-%d-%d, %d -%d -%d", c, d, e, f, g, h);


	return 0;
}
