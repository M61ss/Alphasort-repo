#include "head.h"

bool other(FILE* f) {
	int scancrt = 0;

	printf("Inserire altro?\n[Y = si'; N = no]: ");
	char yn[10];
	scanf("%s", yn);
	printf("\n\n");

	if (yn[0] == 89 || yn[0] == 121) {
		rewind(f);
		printer(f);
	}
	else {

		// leggo?

		printf("Vuoi leggere l'elenco?\n[Y = si'; N = no]: ");
		scanf("%s", yn);
		printf("\n\n");

		if (yn[0] == 89 || yn[0] == 121) {
			rewind(f);
			bool rverification = reader(f);
			if (rverification == false) {
				return false;
			}
		}
		else {
			// altro da aggiungere?

			printf("Inserire altro?\n[Y = si'; N = no]: ");
			scanf("%s", yn);
			printf("\n\n");

			if (yn[0] == 89 || yn[0] == 121) {
				rewind(f);
				printer(f);
			}
			else {
				return true;
			}
		}
	}

	return true;
}