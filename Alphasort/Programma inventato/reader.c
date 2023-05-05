#include "head.h"

bool reader(FILE* f) {
	int scancrt = 0;
	char ch = 1;

	while (1) {
		scancrt = fscanf(f, "%c", &ch);
		if (scancrt != 1) {
			if (scancrt == EOF) {
				break;
			}
			printf("Read file error. Controllare il file, poi riavviare il programma.\n");
			return false;
		}
		printf("%c", ch);
	}
	printf("\n\n");

	return true;
}