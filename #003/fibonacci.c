#include "stdio.h"

int main(int argc, char const *argv[])
{
	int total_num = 10;
	int i;
	int first = 0, second = 1;
	int result = 0;

	for (i = 0; i < total_num; i++)
	{
		if(i <= 1) {
			result = i;
		}
		else {
			result = first + second;

			first = second;
			second = result;
		}

		printf("%d\n",result);
	}


	return 0;
}