#include "stdio.h"
#include "mult.c"

int main(int argc, char const *argv[])
{
	int num = 10;
	int i;

	for (i = 1; i <= num; i++)
	{
		printf("%d multbytwo %d\n",i, multbytwo(i));		
	}

	return 0;
}