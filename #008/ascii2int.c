#include "mylib.c"

int main(int argc, char const *argv[])
{
	char string[256];

	scanf("%[^\n]", string);
	
	int newInt = myAtoi(trim(string));
	printf("%d\n", newInt);

	return 0;
}
