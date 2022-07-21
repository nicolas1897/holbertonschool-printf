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
	/* iterate through the arguments in printf */
	for (i = 0; format[i] != '\0'; i++)
	{/* identify the percentage symbol "%" */
		if (format[i] == '%')
		{/* iterate inside structure all the options of the pointer form */
			for (j = 0; format_list[j].form != NULL; j++)
			{/* if argument after symbol is equal to option */
				if (format[i + 1] == format_list[j].form[0])
				{/* call the required function */
					answ = format_list[j].f(arg);
					if (answ == -1)
						return (EXIT_FAILURE);
					cont += answ;
					break;
				}
			} /* form diferent to c, s, i, d, %  and format +1 is diferent to space */
			if (format_list[j].form == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{/* call _putchar function */
					_putchar(format[i]);
					_putchar(format[i + 1]);
					cont = cont + 2;
				}
				else
					return (EXIT_FAILURE);
			} /* increase after the special character, avoid printing it */
			i++;
		}
		else
		{
			_putchar(format[i]);
			cont++;
		}
	}
	return (cont);
}
