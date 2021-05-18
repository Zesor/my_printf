/*
** EPITECH PROJECT, 2020
** b_flags.c
** File description:
** b_flags
*/

#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>

int put_binary_nbr(int nb);

void my_bflags(va_list *list)
{
    int nbr = va_arg(*list, int);

    put_binary_nbr(nbr);
}