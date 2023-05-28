#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	/*to keep track of the number of characters printed*/
	while (*format != '\0') {
		if (*format == '%') {
			format++;
			/*move past the '%'*/
			/*Handle the conversion specifiers*/
			switch (*format) {
				case 'c': {
						  /*Print a single character*/
						  char c = (char)va_arg(args, int);
						  putchar(c);
						  count++;
						  break;
					  }
				case 's':
					  {
						  /*Print a null-terminated string*/
						  char *s = va_arg(args, char*);
						  while (*s != '\0') {
							  putchar(*s);
							  s++;
							  count++;
						  }
						  break;
					  }
				case '%':
					  /*Print a literal '%'*/
					  putchar('%');
					  count++;
					  break;
			}
		}
		else
		{
			/*Print regular characters*/
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return count;
}
