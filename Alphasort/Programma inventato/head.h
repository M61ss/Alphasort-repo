#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

extern bool printer(FILE *f);
extern FILE* open(const char* filename);
extern void title_print();
extern size_t ecounter(FILE* f);
extern void caprestore(char* s, size_t* captmp, size_t capcounter);
extern int ecmp(FILE* f, char* s, int* pos);
extern char* insert(void);
extern bool reader(FILE* f);
extern bool other(FILE* f);