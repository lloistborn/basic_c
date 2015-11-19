#include "stdio.h"

void factorial(int total_num);

int main(int argc, char const *argv[])
{
	int total_num = 10;

	factorial(total_num);
	
	return 0;
}

void factorial(int total_num) {
	int i;
	int result = 1;

	for (i = 1; i <= total_num; i++)
	{	
		result *= i;
		printf("factorial %d is %d\n", i, result);
	}
}