#include <stdio.h>

int main(void)
{
	int hour, minutes;

	printf("Enter a time in 24 hour format: ");
	scanf("%d:%d", &hour, &minutes);

	printf("Equivalent in 12-hour time: ");

	if (hour > 12 && hour < 23) {
		printf("%d:%dpm", hour, minutes);
		
	} else if (hour == 0) {
		printf("12:%dam", minutes);
	} else {
		printf("%d:%dam", hour, minutes);
	}

	printf("\n");

	return 0;
}
