/*
** EPITECH PROJECT, 2020
** put_unsigned_nbr.c
** File description:
** put_unsigned_nbr
*/

#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);

void put_unsigned_nbr(unsigned int nb)
{
    unsigned int x;

    if (nb >= 10) {
        x = nb % 10;
        nb /= 10;
        put_unsigned_nbr(nb);
        my_putchar(x + '0');
    } else
        my_putchar(nb + '0');
}