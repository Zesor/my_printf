/*
** EPITECH PROJECT, 2020
** s_fllags
** File description:
** sflags
*/

#include "my_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int my_putstr(char const *str);

void my_sflags(va_list *list)
{
    char *str = va_arg(*list, char *);

    my_putstr(str);
}