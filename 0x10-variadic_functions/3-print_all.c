#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints all, followed by a new line.
 * @format: A format specifier
 * @...: An unknown  variable arguments
 * Description: Any datatype not of type char, int, float char * is ignored.
 * If a string argument is NULL, print (nil).
 */
void print_all(const char * const format, ...)
{
	int i, sepind;
	va_list args;
	const char *str;
	char *s;

	i = 0;
	va_start(args, format);
	str = format;
while (str != NULL && str[i] != '\0')
	{
		switch (*str)                        {
		case 'i':
		{
			printf("%d", va_arg(args, int));
			sepind = 0;
			break;
		}
		case 's':
		{
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			sepind = 0;
			break;
		}
		case 'c':
		{
			printf("%c", va_arg(args, int));
			sepind = 0;
			break;
		}
		case 'f':
		{
			printf("%f", va_arg(args, double));
			sepind = 0;
			break;
		}
		default:
		{
			sepind = 1;
			break;
		}
		}
		if (str[i + 1] != '\0' && sepind == 0)
		{
			printf(", ");
		}
		str++;
		i++;
	}
	va_end(args);
	printf("\n");
}
