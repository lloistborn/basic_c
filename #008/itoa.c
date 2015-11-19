#include "mylib.c"

int main(int argc, char const *argv[])
{
	int num;
	char *chr;

	scanf("%d", &num);

	myItoa(chr, num);

	printf("%c", chr);

	return 0;
}