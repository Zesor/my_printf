/*
** EPITECH PROJECT, 2020
** my_put_octal.c
** File description:
** my_put_octal
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>
#include "my_printf.h"

void my_putchar(char c);

int my_put_octal(int nb)
{
    int result;

    if (nb < 0) {
        my_putstr("37777777767\n");
        exit(84);
    }
    if (nb >= 8) {
        result = nb % 8;
        nb /= 8;
        my_put_octal(nb);
    } else if (nb > 0) {
        result = nb % 8;
        nb /= 8;
    }
    my_putchar(result + '0');
}