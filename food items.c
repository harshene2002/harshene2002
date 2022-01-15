#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter 1 for Pizza");
	printf("\nEnter 2 for Burger");
	printf("\nEnter 3 for Pasta");
	printf("\nEnter 4 for French Fries");
	printf("\nEnter 5 for Sandwich");
	printf("\nEnter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nFood item-Pizza");
			printf("\nPrice-Rs 239");
			break;
		case 2:
			printf("\nFood item-Burger");
			printf("\nPrice-Rs 129");
			break;
		case 3:
			printf("\nFood item-Pasta");
			printf("\nPrice-Rs 179");
			break;
		case 4:
			printf("\nFood item-French Fries");
			printf("\nPrice-Rs 99");
			break;
		case 5:
			printf("\nFood item-Sandwich");
			printf("\nPrice-Rs 149");
			break;
		default:
			printf("\nPlease enter a valid choice");
	}
     return 0;
}
