#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/* prototypes */
typedef struct print
{
        char *specifier;
        void (*print_func)(va_list arg);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
