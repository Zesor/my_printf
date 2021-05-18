/*
** EPITECH PROJECT, 2020
** o_flags.c
** File description:
** o_flags
*/

#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int my_put_octal(int nb);

void my_oflags(va_list *list)
{
    int nbr = va_arg(*list, int);

    my_put_octal(nbr);
}