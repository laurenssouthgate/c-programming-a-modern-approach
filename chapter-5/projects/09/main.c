#include <stdio.h>

int main(void)
{
	int d1, d2, m1, m2, y1, y2;

	printf("Enter first date (dd/mm/yy): ");
	scanf("%d/%d/%d", &d1, &m1, &y1);

	printf("Enter second date (dd/mm/yy): ");
	scanf("%d/%d/%d", &d2, &m2, &y2);

	if (y1 > y2) {
		printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
	} else if (y1 == y2) {
		if (m1 > m2) {
			printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
		} else if (m1 == m2) {
			if (d1 > d2) {
				printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
			} else if (d1 == d2) {
				printf("The two dates are identical");
			} else {
				printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
			}
		} else {
			printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
		}
	} else {
		printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
	}

	printf("\n");

	return 0;
}
