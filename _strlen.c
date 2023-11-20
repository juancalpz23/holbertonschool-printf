#include "main.h"
/**
 * _strlen - Returns a strings length
 *
 * @s: String to determine length
 *
 * Return: S Length
 **/
int _strlen(char *s)
{
	int i = 0, ln = 0;

	while (s[i] != '\0')
	{
		i++;
		ln++;
	}
	return (ln);
}
