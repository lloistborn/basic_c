#include "stdio.h"

int main(int argc, char const *argv[])
{
	int offset = 10;
	int i, temp;
	float counter = 0;
	float result = 0.0;

	for (i = 1; i <= offset; ++i)
	{
		temp = i*i;
		counter += temp;
	}

	result = counter/offset;

	printf("%.2f\n", result);

	return 0;
}