/*
** EPITECH PROJECT, 2020
** put_binary_name.c
** File description:
** put_binary_nbr
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>
#include "my_printf.h"

void my_putchar(char c);

int put_binary_nbr(int nb)
{
    int result;

    if (nb < 0)
        exit(84);
    if (nb >= 2) {
        result = nb % 2;
        nb /= 2;
        put_binary_nbr(nb);
    } else if (nb > 0) {
        result = nb % 2;
        nb /= 2;
    }
    my_putchar(result + '0');
}