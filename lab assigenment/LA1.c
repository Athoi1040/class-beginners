#include <stdio.h>

int main()
{
	int num, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("%d terms of natural number and their sum is-\n", num);
	for (int i = 1; i <= num; i++)
	{
		sum += i;
		printf("%d", i);
		if (i == num) printf("\n");
		else printf(" ");
	}
	printf("Sum = %d\n", sum);
	return 0;
}