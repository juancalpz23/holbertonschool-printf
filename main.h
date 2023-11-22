#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int _char(char c);
int _str(char *s);
int _int(int num);
int _def(char c);
int _uint( unsigned int n);
int _oct(unsigned int n);
int _hex(unsigned int n, int uppercase);
int _ptr(void *ptr);

#endif
