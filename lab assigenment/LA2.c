#include <stdio.h>

int main()
{
	int num, sum = 0;
	printf("Enter 10 numbers: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("Sum = %d\n", sum);
	printf("Average = %.2f\n", sum / 10.0);
	return 0;
}