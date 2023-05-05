#include "head.h"

void title_print() {
	char t[] = "Alphasorter";
	size_t len = strlen(t);

	printf("+---");
	for (size_t i = 0; i < len; i++) {
		printf("-");
	}
	printf("---+\n");

	printf("| * ");
	printf("%s", t);
	printf(" * |\n");

	printf("+---");
	for (size_t i = 0; i < len; i++) {
		printf("-");
	}
	printf("---+\n\n");

	return;
}