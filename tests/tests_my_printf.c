/*
** EPITECH PROJECT, 2020
** tests_my_printf.c
** File description:
** tests_
*/

#include  <criterion/criterion.h>
#include  <criterion/redirect.h>
#include "../includes/my_printf.h"

void  redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}
Test(my_printf , simple_string , .init = redirect_all_std)
{
    my_printf("hello  world");
    cr_assert_stdout_eq_str("hello  world");
}
Test(my_printf, medium_string , .init = redirect_all_std)
{
    my_printf("hello world 45");
    cr_assert_stdout_eq_str("hello world 45");
}
Test(my_printf, d_tests , .init = redirect_all_std)
{
    my_printf("Bobjour j'ai %d amis", 45);
    cr_assert_stdout_eq_str("Bobjour j'ai 45 amis");
}
Test(my_printf, x_tests , .init = redirect_all_std)
{
    my_printf("Bobjour j'ai %x amis et %p coco", 45, 45);
    cr_assert_stdout_eq_str("Bobjour j'ai 2d amis et 0x2d coco");
}
Test(my_printf, hard_test , .init = redirect_all_std)
{
    my_printf("%s%d%c", "je suis chaud", 44, 'a');
    cr_assert_stdout_eq_str("je suis chaud44a");
}
Test(my_printf, hardest_test , .init = redirect_all_std)
{
    my_printf("caca %d j'ai fais %c pipi et sotises %X", 3, 'r', 45);
    cr_assert_stdout_eq_str("caca 3 j'ai fais r pipi et sotises 2D");
}
Test(my_printf, x_test , .init = redirect_all_std)
{
    my_printf("%u", 34);
    cr_assert_stdout_eq_str("34");
}
Test(my_printf, p_test , .init = redirect_all_std)
{
    my_printf("%p", 45);
    cr_assert_stdout_eq_str("0x2d");
}
Test(my_printf, b_test , .init = redirect_all_std)
{
    my_printf("%b", 34);
    cr_assert_stdout_eq_str("100010");
}
Test(my_printf, s_test , .init = redirect_all_std)
{
    my_printf("%s", "tata toto");
    cr_assert_stdout_eq_str("tata toto");
}
Test(my_printf, c_test , .init = redirect_all_std)
{
    my_printf("%c", 'r');
    cr_assert_stdout_eq_str("r");
}
Test(my_printf, i_test , .init = redirect_all_std)
{
    my_printf("%i", 34);
    cr_assert_stdout_eq_str("34");
}
Test(my_printf, o_test , .init = redirect_all_std)
{
    my_printf("%o", 10);
    cr_assert_stdout_eq_str("12");
}
Test(my_printf, _test , .init = redirect_all_std)
{
    my_printf("%s", "34");
    cr_assert_stdout_eq_str("34");
}
Test(my_printf, modulo_test , .init = redirect_all_std)
{
    my_printf("%%", "34");
    cr_assert_stdout_eq_str("%");
}
Test(my_printf, ofail_tests , .init = redirect_all_std)
{
    my_printf("%o", 10);
    cr_assert_stdout_eq_str("12");
}
Test(my_printf, pfail_tests , .init = redirect_all_std)
{
    my_printf("%p", 0);
    cr_assert_stdout_eq_str("(nil)");
}