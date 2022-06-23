/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** test_string
*/

#include "../includes/string_management.h"

Test(string_managent, cut_str)
{
    char *str = "Hello World";
    char *str2 = cut_str(5, str);

    cr_assert_str_eq(str2, "Hello");
}