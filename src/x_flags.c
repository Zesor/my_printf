/*
** EPITECH PROJECT, 2020
** x_flags.c
** File description:
** xflags
*/

#include "my_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void hex_decimal(int nbr);

void my_xflags(va_list *list)
{
    int nb = va_arg(*list, int);

    hex_decimal(nb);
}
