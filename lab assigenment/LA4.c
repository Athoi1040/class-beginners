#include <stdio.h>

int main(void)
{
	int x = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d", x);
			x++;
			if (j == i - 1) printf("\n");
			else printf(" ");
		}
	}
	return 0;
}