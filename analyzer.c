#include "main.h"

/**
 *
 *
 *
 */
int analyzer(const char *format, format_list, va_list arg)
{
	int i = 0, j = 0, cont = 0, answ = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{              
			for (j = 0; format_list[j].form != NULL; j++)
			{
				if (format[i + 1] == format_list[j].form)
				{
					answ = format_list[j].f(arg);
					if (answ == -1)
						return (EXIT_FAILURE);
					cont += answ;
					break;
				}
			}
			if (format_list[j].format == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					cont = cont + 2;
				}
				else
					return (EXIT_FAILURE);
			}
		}
		else
		{
			_putchar(format[i]);
			cont++;
		}
	}
	return (cont);
}
