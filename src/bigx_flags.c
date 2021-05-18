/*
** EPITECH PROJECT, 2020
** X_flags.c
** File description:
** X_flags.c
*/

#include "my_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void my_upperxflags(int nbr);

void my_upper_flags(va_list *list)
{
    int nbr = va_arg(*list, int);

    my_upperxflags(nbr);
}