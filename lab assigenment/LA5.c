#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
			if (j == i - 1) printf("\n");
			else printf(" ");
		}
	}
	return 0;
}