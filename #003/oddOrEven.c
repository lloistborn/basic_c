#include "stdio.h"

int main(int argc, char const *argv[])
{
	int total_num = 10;
	int i;

	for (i = 1; i <= total_num; i++)
	{
		printf("%d ", i);

		if (i % 2 == 0)
		{
			printf("is even\n");
		}
		else {
			printf("is odd\n");
		}
	}

	return 0;
}