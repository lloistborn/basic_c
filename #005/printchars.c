#include "stdio.h"

void printchars(char ch, int n);

int main(int argc, char const *argv[])
{
	printchars('*', 10);

	return 0;
}

void printchars(char ch, int n) {
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}