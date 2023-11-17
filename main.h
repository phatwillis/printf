#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* ... (existing definitions) */

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list, char buffer[],
		int flags, int width, int precision, int size);

/* ... (existing declarations) */

#endif /* MAIN_H */

