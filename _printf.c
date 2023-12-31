#include "main.h"
/**
 * _printf - prints function
 * @format: variable used
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int i = 0, cnt = 0, spc = 0;
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
				cnt += _char(va_arg(ap, int));
				break;
			case 's':
				cnt += _str(va_arg(ap, char *));
				break;
			case '%':
				write(1, &format[i], 1);
				cnt++;
				break;
      case 'i':
				cnt += _int(va_arg(ap, int));
				break;
			case 'd':
				cnt += _int(va_arg(ap, int));
				break;
			case 'o':
				cnt += _oct(va_arg(ap, unsigned int));
				cnt++;
				break;
			case 'x':
				cnt += _hex(va_arg(ap, unsigned int), 0);
				break;
			case 'X':
				cnt += _hex(va_arg(ap, unsigned int), 1);
				break;
			case 'p':
				cnt += _ptr(va_arg(ap, void *));
				break;
			case 'u':
				cnt += _uint(va_arg(ap, unsigned int));
				break;
			default:
				cnt += _def(format[i]);
				break;
		}
			} else
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
