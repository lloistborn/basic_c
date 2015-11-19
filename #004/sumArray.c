#include "stdio.h"

int sum_integers(int a[], int size);

int main(int argc, char const *argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(a) / sizeof(a[0]);

	int sum = 0;

	sum = sum_integers(a, size);

	printf("%d\n", sum);

	return 0;
}

int sum_integers(int a[], int size) {
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}

	return sum;
}