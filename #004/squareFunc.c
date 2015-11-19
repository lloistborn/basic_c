#include "stdio.h"

int main(int argc, char const *argv[])
{
	int num = 10;
	int i;

	for (i = 1; i < num; i++)
	{
		printf("square %d is %d\n", i, square(i));
	}

	return 0;
}

int square(int num) {
	return num*num;
}