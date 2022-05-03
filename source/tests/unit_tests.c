/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

/* ------LIBMY------ */
    
    /* my_getnbr */

Test(libmy, getnbr_0)
{
    cr_assert_eq(my_getnbr("-42"), -42);
}

Test(libmy, getnbr_1)
{
    cr_assert_eq(my_getnbr("0"), 0);
}

Test(libmy, getnbr_2)
{
    cr_assert_eq(my_getnbr("42"), 42);
}

Test(libmy, getnbr_3)
{
    cr_assert_eq(my_getnbr(""), 0);
}

Test(libmy, getnbr_4)
{
    cr_assert_eq(my_getnbr("789954548979452649784"), 0);
}

    /* my_strcmp */

Test(libmy, strcmp_0)
{
    cr_assert_eq(my_strcmp("EPITECH", "EPITECH"), 0);
}

Test(libmy, strcmp_1)
{
    cr_assert_eq(my_strcmp("s2vb/fy*s-d65", "s2vb/fy*s-d65"), 0);
}

Test(libmy, strcmp_2)
{
    cr_assert_eq(my_strcmp("A", "a"), -32);
}

Test(libmy, strcmp_3)
{
    cr_assert_eq(my_strcmp("EPITECH", "EPITECK"), -3);
}

Test(libmy, strcmp_4)
{
    cr_assert_eq(my_strcmp("", ""), 0);
}

    /* my_strlen */

Test(libmy, strlen_0)
{
    cr_assert_eq(my_strlen(""), 0);
}

Test(libmy, strlen_1)
{
    cr_assert_eq(my_strlen("1"), 1);
}

Test(libmy, strlen_2)
{
    cr_assert_eq(my_strlen("EPITECH"), 7);
}

Test(libmy, strlen_3)
{
    cr_assert_eq(my_strlen(" "), 1);
}

Test(libmy, strlen_4)
{
    cr_assert_eq(my_strlen("987-546/4_546*48(3)4"), 20);
}

/* ------TESTS_UNITAIRES------ */
