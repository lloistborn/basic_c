#include "stdio.h"

int main(int argc, char const *argv[])
{
	int offset = 10;
	int i;

	for (i = 1; i <= offset; ++i)
	{
		printf("%d\t%d\n", i, i*i);	
	}

	return 0;
}