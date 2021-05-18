/*
** EPITECH PROJECT, 2020
** Cflags.c
** File description:
** cflags
*/

#include "my_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void my_cflags(va_list *list)
{
    char c = va_arg(*list, int);

    my_putchar(c);
}