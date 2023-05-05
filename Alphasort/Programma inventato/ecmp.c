#include "head.h"

int ecmp(FILE* f, char* s, int* pos) {
	int tmp = 0;
	int i = 0;
	int flag = 0;

	for (i; tmp != 59; i++) {
		tmp = fgetc(f);
		if (tmp == 62) {
			*pos = ftell(f);
			*pos += 1;
		}
	}
	i -= 3;

	char* st = malloc(i * sizeof(char));
	i--;

	fsetpos(f, pos);
	for (size_t j = 0; j < i; j++) {
		st[j] = fgetc(f);
	}
	st[i] = 0;

	// confronto 

	flag = strcmp(s, st);

	free(st);
	return flag;
}