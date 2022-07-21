#include "main.h"

/**
 *analyzer - check the arguments and identify the parameters,
 *call the related function.
 *@format: input arguments
 *@format_list: list of pointer function
 *@arg: argument list given to the program
 *Return: amount of printed character (cont)
 */
int analyzer(const char *format, format_type format_list[], va_list arg)
{
	int i = 0, j = 0, cont = 0, answ = 0;

	for (i = 0; format[i] != '\0'; i++)/* iterate through the arguments in printf */
	{
		if (format[i] == '%')/* identify the percentage symbol "%" */
		{
			for (j = 0; format_list[j].form != NULL; j++)/* iterate inside structure all the options of the pointer form */
			{
				if (format[i + 1] == format_list[j].form[0])/* if argument after symbol is equal to option */
				{
					answ = format_list[j].f(arg);/* call the required function */
					if (answ == -1)
						return (EXIT_FAILURE);
					cont += answ;
					break;
				}
			}
			if (format_list[j].form == NULL && format[i + 1] != ' ')/* form diferent to c, s, i, d, %  and format +1 is diferent to space */
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);/* call _putchar function */
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
