#include <stdio.h>

int main(void)
{
	int h, m, t;

	printf("Enter a time in 24 hour format: ");
	scanf("%d:%d", &h, &m);

	t = h * 60 + m;

	printf("Closest departure time is ");

	if (t < (8 * 60)) {
		printf("8:00am arriving at 10:16am\n");
	} else if (t < (9 * 60 + 43)) {
		printf("9:43am arriving at 11:52am\n");
	} else if (t < (11 * 60 + 19)) {
		printf("11:19am arriving at 1:31pm\n");
	} else if (t < (12 * 60 + 47)) {
		printf("12:47pm arriving at 3:00pm\n");
	} else if (t < (14 * 60)) {
		printf("2:00pm arriving at 4:08pm\n");
	} else if (t < (15 * 60 + 45)) {
		printf("3:45pm arriving at 5:55pm\n");
	} else if (t < (19 * 60)) {
		printf("7:00pm arriving at 9:20pm\n");
	} else if (t < (9 * 60 + 45)) {
		printf("9:45pm arriving at 11:58pm\n");
	}

	return 0;
}
