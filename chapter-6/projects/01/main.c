#include <stdio.h>

int main(void)
{
	float current_n, highest_n;

	while(current_n != 0) {
		float prev_n = current_n;
		printf("Enter a number: ");
		scanf("%f", &current_n);
		if (current_n > prev_n) highest_n = current_n;
	}

	printf("The largest number entered was %.2f", highest_n);

	return 0;
}
