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

Test(string_managent, replace_str)
{
    char *str = "Hello World";
    char *str2 = "Hello";

    str = replace_str(str, str2);
    cr_assert_str_eq(str, "Hello");
}

Test(string_managent, replace_char)
{
    char *str = "Hello World";

    str = replace_char(str, 'o', 'u');
    cr_assert_str_eq(str, "Hellu Wurld");
}

Test(string_managent, count_char)
{
    char *str = "Hello World";

    cr_assert_eq(count_char(str, 'o'), 2);
}

Test(string_managent, count_substr)
{
    char *str = "Hello World";

    cr_assert_eq(count_substr(str, "llo"), 1);
}

Test(string_managent, delete_char)
{
    char *str = "Hello World";

    str = delete_char(str, 'o');
    cr_assert_str_eq(str, "Hell Wrld");
}

Test(string_managent, insert_char)
{
    char *str = "Hello World";

    str = insert_char(str, 'u', 5);
    cr_assert_str_eq(str, "Hellou World");
}