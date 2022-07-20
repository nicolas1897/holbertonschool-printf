#include "main.h"

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list arg;

	formattype format_list[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_mod},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
		};

	va_start(arg, format);
	if (format == NULL)
		return(EXIT_FAILURE);

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		j = 0;
		while (format_list[j].form != 0)
		{
		
		}
	}
} 
