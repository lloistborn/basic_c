#include "stdio.h"

int main(int argc, char const *argv[])
{
	int length = 10;
	int i, j;

	for (i = 1; i <= length; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}