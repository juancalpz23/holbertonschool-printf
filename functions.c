#include "main.h"
/*e
 *_char - prints a char
 *@c: char to print
 * Return: Char, 0 Success
 **/
int _char(char c)
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
 * _str - Functions to print strings
 * @s: parameter
 * Return: String
 **/
int _str(char *s)
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
 * _def - Print %
 * @c: character to print
 * Return: % or Num Success
 **/
int _def(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}
/**
 * _int - Prints an in or dec
 * @num: number to print
 * Return: Printed number
 **/
int _int(int num)
{
	char n[10];
	int i, c = 0, neg = 0;

	if (num < 10)
	{
		write (1, "-", 1);
		neg++;
		num *= (-1);
	}
	for (i = 9; num != 0; i--)
	{
		n[i] = '0' + (num % 10);
		num /= 10;
	}
	i++;
	c = 10 - i;
	write (1, &n[i], c);
	return (neg + c);
}
/**
 * _uns - prints an unsigned int
 * @n: variable to determine if unsigned
 * Return: Unsigned int
 **/
int _uns(unsigned int n)
{
	int count = 0;

	do
	{
		char digit = '0' + n % 10;
		write(1, &digit, 1);
		n /= 10;
		count++;
	} 
	while (n != 0);
	return (count);
}
/**
 * _strlen - calculate the lenght of a string
 * @s: integer used
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int i, lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}
