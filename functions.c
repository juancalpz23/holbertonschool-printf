#include "main.h"
/**
 *_pchar - prints a char
 *
 *@c: char to print
 *
 * Return: Char, 0 Success
 **/
int _pchar(char c)
{
	if (c != '\0')
	{
		write(1, &c, 1);
		return (1);
	}
	else
	return (0);
}
/**
 * _pstr - Functions to print strings
 *
 * @s: parameter
 *
 * Return: String
 **/
int _pstr(char *s)
{
	int ln;

	if (s != NULL)
	{
		ln = _strlen(s);
		write(1, s, ln);
		return (ln);
	}
	else if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
		return (0);
}
/**
 * _pdef - Print %
 *
 * @c: character to print
 *
 * Return: % or Num Success
 **/
int _pdef(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}
