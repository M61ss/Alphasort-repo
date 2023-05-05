#include "head.h"

bool printer(FILE* f) {
	int scancrt = 0;
	int pos = 0;
	int i = 0;
	int flag = 0;
	int ecount = 0;
	int tmp = 0; 

	char* s = insert();

	// conto il numero di elementi 

	ecount = ecounter(f);
	if (ecount == 0) {
		fprintf(f, "-> %s;\n", s);
		return;
	}

	/* 
	riparto da capo
		leggo il primo elemento, alloco memoria e la riempio
	*/

	rewind(f);

	while (1) {
		flag = ecmp(f, s, &pos);
		if (flag == 0) {
			printf("L'elemento inserito fa già parte dell'elenco.\n");
			break;
		}
		if (flag < 0) {
			pos -= 3;
			fsetpos(f, &pos);
			fprintf(f, "-> %s;\n", s);
			break;
		}
		if (flag > 0) {
			scancrt = fgetc(f);
			pos = ftell(f);
			scancrt = fgetc(f);
			if (scancrt == EOF) {
				fsetpos(f, &pos);
				fprintf(f, "\n-> %s;", s);
				break;
			}
		}
	}

	bool crt = other(f);
	if (crt == false) {
		return false;
	}
}