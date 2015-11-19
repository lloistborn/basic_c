#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define SHIFT 5

char* get_argv(char const *argv[]);
char* copy_filename(char *file, size_t lenfile, char *str);
int ispoint(char chr);
void make_copy(char *ipf);
void writeToFile(FILE *inputFile, char *outputFile);

int main(int argc, char const *argv[])
{
	if(argc > 0) {
		make_copy(get_argv(argv));
	}
	else {
		printf("no argument\n");
	}

	return 0;
}

char* get_argv(char const *argv[]) {
	return (char*)argv[1];
}

char* copy_filename(char *file, size_t lenfile, char *str) {
	int i, j;
	int flagPoint = 0;
	char VAL[] = "_copy";

	for(i = 0; i < lenfile; i++) {
		if(flagPoint == 0) {
			if(ispoint(file[i]) == 1) { 
				strcat(str, VAL);
				str[i+SHIFT] = file[i];
				flagPoint += 1; 
			}
			else { 
				str[i] = file[i];
			}
		}
		else {
			str[i+SHIFT] = file[i];
		}
	}
	str[i+SHIFT] = '\0';

	return str;
}

int ispoint(char chr) {
	if(chr == '.')
		return 1;

	return 0;
}

void make_copy(char *ipf) {
	char *fileName = NULL; 		
	char *name_copied = NULL;
	char *str = NULL;

	size_t len;

	fileName = ipf;
	len = strlen(fileName);
	fileName[len] = '\0'; 

	str = (char*)malloc(sizeof(char)*(len+6));

	// make a copy of filename
	name_copied = copy_filename(fileName, len, str);

	FILE *fp = fopen(fileName, "rb");
	if(fp != NULL) {
		writeToFile(fp, name_copied);
		fclose(fp);
	}
	else {
		printf("file %s doesnt exists \n", fileName);
	}

	free(str);
}

void writeToFile(FILE *inputFile, char *outputFile) {
	char buffer[3200];
	char *lastBuffer;
	int fileSize, n, leftOver;
	int iter, i, CHUNK = 3200;
	FILE *opf;

	/* Find end of file */
	fseek(inputFile, 0L, SEEK_END);

	/* Get current position */
	n = ftell(inputFile);
	rewind(inputFile);

	fileSize = n;
	leftOver = fileSize % CHUNK;
	iter = fileSize - CHUNK;

    if (buffer != NULL)
    {
		opf = fopen(outputFile, "w");

    	for(i = 0; i < iter; i+=CHUNK) {
    		fread(buffer, CHUNK, 1, inputFile);
    		fwrite(buffer, CHUNK, 1, opf);
    	}	

		lastBuffer = (char*)malloc(leftOver);

		fread(lastBuffer, leftOver, 1, inputFile);
    	fwrite(lastBuffer, leftOver, 1, opf);
    	
		free(lastBuffer);
   		fclose(opf);
    }
    else{
    	printf("buffer is null\n");
    }

}