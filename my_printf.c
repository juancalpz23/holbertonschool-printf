#include "main.h"
#include "functions.c"
/*
 * _printf - prints function
 * @format: variable used
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0, cnt = 0, spc = 0;
	va_list ap;

	va_start (ap, format);
	if (format != NULL)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;

				while (format[i] == ' ')
				{
					i++;
					spc++;
				}
		switch (format[i])
		{
			case 'c':
				j += _pchar(va_arg(ap, int));
				break;
			case 's':
				k += _pstr(va_arg(ap, char *));
				break;
			case '%':
				write(1, &format[i], 1);
				cnt++;
				break;
			default:
				j += _pdef(format[i - 1]);
				cnt++;
				i++;
				break;
		}
			}else
			{
				write(1, &format[i], 1);
				cnt++;
			}
			i++;
		}
		va_end(ap);
		return (cnt);
	}
	else
	va_end(ap);
	return (-1);
}
