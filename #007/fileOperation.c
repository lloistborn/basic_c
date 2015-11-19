#include "stdio.h"
#include "stdlib.h"

void printBytes(unsigned char* buff, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if(i%8 == 0){
            printf("\n");
        }
        if (i > 0) printf(":");
        // printf("%02x\n", buff[i]);
        printf("0x%02x",buff[i]);
        printf("\t");

    }
}

int main()
{
    // unsigned char *buffer;
	unsigned char buffer[1024];
    int size, n;

    FILE *fp = fopen("gundah.wav", "rb");

    /* Find end of file */
	// fseek(fp, 0L, SEEK_END);

	/* Get current position */
	// n = ftell(fp);

	/* Get size of file */
	// size = n;

    // buffer = (unsigned char*)malloc(sizeof(unsigned char)+1);

    if (fp != NULL) {
        size_t byte_read;

        do{
            byte_read = fread(buffer,sizeof(unsigned char), 1, fp);
            printBytes(buffer, byte_read);
        }while(byte_read > 0);

        fclose(fp);
    }
    else{
    	printf("null\n");
    }


    return 0;
}

x