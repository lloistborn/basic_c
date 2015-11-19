#include "stdio.h"

int main(int argc, char const *argv[])
{
	int total_num = 10;
	int counter = 0;
	int i;

	for (i = 1; i <= total_num; i++)
	{
		if (i > 3)
		{
			counter += 1;
		}
	}

	printf("%d\n", counter);

	return 0;
}