#include "variadic_functions.h"

/**
 * print_all - prints anythinng.
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str, *yep = "";

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", yep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", yep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", yep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", yep, str);
					break;
				default:
					i++;
					continue;
			}
			yep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
