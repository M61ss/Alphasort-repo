#include "head.h"

int main(void) {
	title_print();

	printf("Inserire il nome del file: ");
	char filename[150];
	scanf("%s", filename);
	printf("\n\n");

	FILE* f = open(filename);
	if (f == NULL) {
		printf("Fopen error (nome o estensione del file non validi). Riavviare il programma e inserire un formato supportato.\n");
		return 0;
	}

	bool crt = printer(f);
	if (crt == false) {
		return 0;
	}

	fclose(f);
	printf("Grazie per aver scelto Alphasort!\nsaving & closing file...\n\n");

	return 0;
}