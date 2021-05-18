/*
** EPITECH PROJECT, 2020
** my_printf.h
** File description:
** my_printf.h
*/

#include <stdarg.h>
#ifndef BS_PRINTF_
#define BS_PRINTF_

void modulo_flags(va_list *list);
void my_upper_flags(va_list *list);
void my_uflags(va_list *list);
void my_printf(char *fmt, ...);
void my_pflags(va_list *list);
void my_bflags(va_list *list);
int put_binary(int nb);
int my_put_octal(int nb);
void my_oflags(va_list *list);
void my_put_unsigned_nbr(unsigned int nb);
void hex_decimal_capitalize(int nbr);
void my_iflags(va_list *list);
void my_cflags(va_list *list);
void my_dflags(va_list *list);
void my_sflags(va_list *list);
void my_xflags(va_list *list);
void hexdecimal_capitalize(va_list *list);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);

#endif
