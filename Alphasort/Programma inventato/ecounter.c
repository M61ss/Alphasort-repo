#include "head.h"

size_t ecounter(FILE* f) {
	size_t ecount = 0;
	int tmp = 1;

	ecount = 0;
	tmp = 1;
	while (tmp != EOF) {
		tmp = fgetc(f);
		if (tmp == 59) {
			ecount++;
		}
	}
	
	return ecount;
}