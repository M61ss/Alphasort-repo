#include "head.h"

void caprestore(char* s, size_t* captmp, size_t capcounter) {

	for (size_t i = 0; i < capcounter; i++) {
		s[captmp[i]] -= 32;
	}

	return;
}