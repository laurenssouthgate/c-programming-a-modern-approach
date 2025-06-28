#include <stdio.h>

int main(void)
{
	int item_no, day, month, year;
	float item_price;

	printf("Enter item no: ");
	scanf("%d", &item_no);

	printf("Enter item price: ");
	scanf("%f", &item_price);

	printf("Enter purchase date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day, &month, &year);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t£%-4.2f\t%2.2d/%2.2d/%4d\n", item_no, item_price, day, month, year);

	return 0;
}
