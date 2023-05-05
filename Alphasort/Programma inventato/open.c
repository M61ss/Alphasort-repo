#include "head.h"

FILE* open(const char* filename) {
	size_t l = strlen(filename);
	for (size_t i = 0; i < l; i++) {
		if (filename[i] == 34 || filename[i] == 42 || filename[i] == 47 || filename[i] == 58 || filename[i] == 60 || filename[i] == 62 || filename[i] == 63 || filename[i] == 124) {
			return NULL;
		}
	}
	for (size_t extention = l - 4; extention < l; extention++) {
		if (filename[extention] != 46 && filename[extention] != 116 && filename[extention] != 120) {
			return NULL;
		}
	}

	FILE* f = fopen(filename, "r+");
	if (f == NULL) {
		printf("Il file definito non esiste. Creare un nuovo file?\n[Y = si'; N = no]: ");
		char flag[10];
		scanf("%s", flag);
		printf("\n\n");

		if (flag[0] == 89 || flag[0] == 121) {
			f = fopen(filename, "w+");
			if (f == NULL) {
				return NULL;
			}
		}
		else {
			return NULL;
		}
	}

	return f;
}

/* 
controllo se ci sono caratteri non validi 
	apro il file
		controllo se si è aperto 
			se non si apre ne creo uno
				controllo se lo ha creato correttamente
*/