/*
** EPITECH PROJECT, 2020
** dflags.c
** File description:
** dflags
*/

#include "my_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int my_put_nbr(int nb);

void my_dflags(va_list *list)
{
    int nb = va_arg(*list, int);

    my_put_nbr(nb);
}