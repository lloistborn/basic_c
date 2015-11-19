#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int randRange(int n);
void printN(int ch, int n);

int main()
{
	int i;
	int d1, d2;
	int a[13];	/* uses [2..12] */
	double sum = 0;
	double sumsq = 0;
	int n = 0;
	double mean;
	double stdev;

	for(i = 2; i <= 12; i = i + 1)
		a[i] = 0;

	for(i = 0; i < 100; i = i + 1)
	{
		// d1 = rand() % 6 + 1;
		// d2 = rand() % 6 + 1;

		d1 = randRange(6);
		d2 = randRange(6);

		a[d1 + d2] = a[d1 + d2] + 1;
		sum = sum + d1 + d2;
		sumsq = sumsq + (d1 + d2) * (d1 + d2);
		n = n + 1;
	}

	for(i = 2; i <= 12; i = i + 1) {
		printf("%d: %d\t", i, a[i]);
		printN('*', a[i]);
		printf("\n");
	}

	printf("\n");
	mean = sum / n;
	stdev = sqrt((sumsq - sum * sum / n) / (n - 1));
	
	printf("rata-rata: %f\n", mean);
	printf("std deviasi: %f\n", stdev);

	return 0;
}

int randRange(int n) {
	return rand() / (RAND_MAX / n + 1);
}

void printN(int ch, int n)
{
	int i;

	for(i = 0; i < n; i++)
		printf("%c", ch);
}