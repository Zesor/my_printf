/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** revstr
*/

#include "my_printf.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i = i + 1;
    }
}
