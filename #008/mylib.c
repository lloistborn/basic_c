#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *trim(char *str)
{
    size_t len = 0;
    char *frontp = str;
    char *endp = NULL;

    if( str == NULL ) { return NULL; }
    if( str[0] == '\0' ) { return str; }

    len = strlen(str);
    endp = str + len;

    
    while( isspace(*frontp) ) { ++frontp; }
    if( endp != frontp )
    {
        while( isspace(*(--endp)) && endp != frontp ) {}
    }

    if( str + len - 1 != endp )
        *(endp + 1) = '\0';
    else if( frontp != str &&  endp == frontp )
        *str = '\0';

    
    endp = str;
    if( frontp != str )
    {
        while( *frontp ) { *endp++ = *frontp++; }
        *endp = '\0';
    }
    
    return str;
}

int myAtoi(char *str) {
	int k = 0;
  	while (*str) {
    	k = k * 10 + (*str) - '0';
	    str++;
  	}
  	return k;
}

float myAtof(char *str) {
	float result = 0;
	float fact = 1;
	int point_seen = 0;
	int d;

	if(*str == '-') {
		str++;
		fact = -1;
	}

	for (point_seen = 0; *str; str++)
	{
		if(*str == '.') point_seen = 1;

		d = *str - '0';

		if(d >= 0 && d <= 9) {
			if(point_seen) fact /= 10.0f;
			result = result * 10.0f + (float)d;
		}
	}
	return result * fact;
}

void myItoa(char *str, int num) {
	int len;
	int i;
	char *temp;

	len = get_len_digit(num);
	printf("length %d\n", len);

	temp = malloc(len+1);

	for(i = 0; i < len; i++) {
		temp[len-i-1] = num % 10 + '0';
		num /= 10;
		printf("loop %d, %c\n", len-i-1, temp[len-i-1]);
	}

	temp[len+1] = '\0';
	
	printf("inside method -> %s\n", &temp[0]);
	str = temp;

	free(temp);

}

int get_len_digit(int num) {
	int numOfDigit = 0;

	while(num) {
		num /= 10;
		numOfDigit+=1;
	}
	return numOfDigit;
}