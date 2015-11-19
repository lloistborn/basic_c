#include "stdio.h"

int main(int argc, char const *argv[])
{
	int total_num = 7;
	int i;
	int result = 1;

	for (i = 1; i <= total_num; i++)
	{	
		result *= i;
		printf("factorial %d is %d\n", i, result);
	
	}

	return 0;
}