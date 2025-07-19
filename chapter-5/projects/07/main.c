#include <stdio.h>

int main(void)
{
	int i, j, k, l, high1, high2, low1, low2, max, min;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i, &j, &k, &l);

	if (i > j) {
		high1 = i; low1 = j;
	}
	else {
		high1 = j; low1 = i; 
	}

	if (k > l) {
		high2 = k; low2 = l;
	}
	else {
		high2 = l; low2 = k;
	}

	if (high1 > high2) {
		max = high1;
	} else {
		max = high2;
	}

	if (low1 < low2) {
		min = low1;
	} else {
		min = low2;
	}
	
	printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);

	return 0;
}
