/*
** EPITECH PROJECT, 2020
** my_put_pointer
** File description:
** put_pointer
*/

#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"
#include <stdarg.h>

void hex_decimal(int nbr);

void my_pflags(va_list *list)
{
    int nbr = va_arg(*list, int);

    if (nbr == 0) {
        write(1, "(nil)", 5);
        return;
    }
    my_putstr("0x");
    hex_decimal(nbr);
}
