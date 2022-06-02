#include <stdio.h>

int main()
{
	int num, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("%d terms of odd natural number and their sum is-\n", num);
	for (int i = 2; i <= num; i += 2)
	{
		sum += i;
		printf("%d", i);
		if (i == num || i == num - 1)
			printf("\n");
		else printf(" ");
	}
	printf("Sum = %d\n", sum);
	return 0;
}