#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 *_char - prints a char
 *
 *@c: char to print
 *
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

/**
 * _str - Functions to print strings
 *
 * @s: parameter
 *
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
 *
 * @c: character to print
 *
 * Return: % or Num Success
 **/
int _def(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

/**
 * _int - prints integers and decimals
 * @num: numbers to print
 * Return: number
 */
int _int(int num)
{
	char n[10];
	int i, c = 0, neg = 0;

	if (num < 0)
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
 * _uint - Prints unsigned integer
 * @n: The unsigned integer
 * Return: Number of characters
 */
int _uint(unsigned int n)
{
	int cnt = 0;
	char dgts;

	do {
		dgts = '0' + n % 10;
		write(1, &dgts, 1);
		n /= 10;
		cnt++;
	} while (n != 0);

	return cnt;
}

/**
 * _oct - Prints an unsigned integer in octal format.
 * @n: The unsigned integer to print
 * Return: The number of characters printed
 */
int _oct(unsigned int n)
{
	char bfr[20];
	int i = 0, j;

	if (n == 0)
	{
		write (1, "0", 1);
	}
	while (n != 0)
	{
		bfr[i++] = '0' + (n % 8);
		n /= 8;
	}
	for (j = i - 1; j >= 0; j--)
	{
		write (1, &bfr[j], 1);
	}
	return (i);
}

/**
 * _hex - Prints hexadecimal number.
 * @n: unsigned integer.
 * @uppercase: 1 if the output should be uppercase, 0 otherwise.
 * Return: number of characters.
 */
int _hex(unsigned int n, int uppercase)
{
	int cnt = 0, i = 0;
	char hexchar[] = "0123456789abcdef", bfr[10];

	if (uppercase)
		hexchar[10] = 'A';

	if (n == 0)
		return write(1, "0",1);
	
	 while (n != 0)
	 {
		 bfr[i++] = hexchar[n % 16];
		 n /= 16;
	 	cnt++;
	 }
	for (i--; i >= 0; i--)
		write(1, &(bfr[i]), 1);

	return cnt;
}

/**
 * _ptr - Prints an adress pointer
 * @ptr: pointer to print.
 * Return: adress.
 */
int _ptr(void *ptr)
{
	if (ptr == NULL)
		return _str("(nil)");

	write(1, "0", 1);
	write(1, "x", 1);

	return _hex((unsigned long)ptr, 0) + 2;
}
