/*
** EPITECH PROJECT, 2020
** hex_decimal.c
** File description:
** hex_decimal
*/

#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void my_putchar(char c);

void my_upperxflags(int nbr)
{
    unsigned int results;

    if (nbr >= 16) {
        results = nbr % 16;
        nbr /= 16;
        my_upperxflags(nbr);
    } else if (nbr > 0) {
        results = nbr % 16;
        nbr /= 16;
    }
    if (results > 9)
        my_putchar(results + '7');
    else
        my_putchar(results + '0');
}