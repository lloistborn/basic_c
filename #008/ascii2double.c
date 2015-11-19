#include "mylib.c"

int main(int argc, char const *argv[])
{
	char string[256];

	scanf("%[^\n]", string);
	
	float newFloat = myAtof(trim(string));
	printf("float -> %f\n", newFloat);

	return 0;
}