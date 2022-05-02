#ifndef STRING_H
#define STRING_H

#include <stdbool.h>

int strlen(const char* ptr);
int strnlen(const char* ptr, int max);
char* strcpy(char* dest, const char* src);
bool isdigit(char c);
int tonumericdigit(char c);

#endif