/*
** EPITECH PROJECT, 2020
** u_flags.c
** File description:
** u_flags
*/

#include "my_printf.h"
#include <unistd.h>
#include <stdarg.h>

void put_unsigned_nbr(unsigned int nb);

void my_uflags(va_list *list)
{
    int nbr = va_arg(*list, int);

    put_unsigned_nbr(nbr);
}