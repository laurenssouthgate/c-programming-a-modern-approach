#include <stdio.h>

int main(void)
{
	int grade;

	printf("Enter a numerical grade: ");
	scanf("%d", &grade);

	int h, t, o;

	o = grade % 10;
	t = grade / 10;
	if (grade > 100 || grade < 0) {
		printf("Error invalid grade entered");
	} else {
		switch (t) {
			case (9):
			case (0):
			printf("Letter grade: A"); break;
			case (8):
			printf("Letter grade: B"); break;
			case (7):
			printf("Letter grade: C"); break;
			case(6):
			printf("Letter grade: D"); break;
			default:
			printf("Letter grade: F"); break;
		}
	}

	return 0;
}
