#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
	char *ft;
	int (*f)(va_list);
} ft_st;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int _pchar(char c);
int _pstr(char *s);
int _pint(int num);
int _pdef(char c);

#endif
