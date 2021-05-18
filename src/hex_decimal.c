/*
** EPITECH PROJECT, 2020
** hex_upper_decimal.c
** File description:
** hex_upper_decimal
*/

#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);

void hex_decimal(unsigned int nbr)
{
    unsigned int results;

    if (nbr >= 16) {
        results = nbr % 16;
        nbr /= 16;
        hex_decimal(nbr);
    } else if (nbr > 0) {
        results = nbr % 16;
        nbr /= 16;
    }
    if (results > 9)
        my_putchar(results + '7' + 32);
    else
        my_putchar(results + '0');
}