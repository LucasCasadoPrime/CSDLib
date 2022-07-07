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

Test(string_managent, insert_substr)
{
    char *str = "Hello World";
    char *str2 = "Hello";

    str = insert_substr(str, str2, 5);
    cr_assert_str_eq(str, "HelloHello World");
}

Test(string_managent, delete_substr)
{
    char *str = "Hello World";
    char *str2 = "Hello ";

    str = delete_substr(str, str2);
    cr_assert_str_eq(str, "World");
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

Test(string_managent, str_to_lower)
{
    char *str = "Hello World";

    str = str_to_lower(str);
    cr_assert_str_eq(str, "hello world");
}

Test(string_managent, str_to_upper)
{
    char *str = "Hello World";

    str = str_to_upper(str);
    cr_assert_str_eq(str, "HELLO WORLD");
}

Test(string_managent, str_to_capital)
{
    char *str = "hello world";

    str = str_to_capital(str);
    cr_assert_str_eq(str, "Hello World");
}

Test(string_managent, str_reverse)
{
    char *str = "Hello World";

    str = str_reverse(str);
    cr_assert_str_eq(str, "dlroW olleH");
}

Test(string_managent, str_is_alpha_true)
{
    char *str = "HelloWorld";

    cr_assert_eq(str_is_alpha(str), 1);
}

Test(string_managent, str_is_alpha_false)
{
    char *str = "Hello Wo1rld";

    cr_assert_eq(str_is_alpha(str), 0);
}

Test(string_managent, str_is_numeric_true)
{
    char *str = "12345";

    cr_assert_eq(str_is_numeric(str), 1);
}

Test(string_managent, str_is_numeric_false)
{
    char *str = "12345a";

    cr_assert_eq(str_is_numeric(str), 0);
}

Test(string_managent, str_is_alphanumeric_true)
{
    char *str = "12345a";

    cr_assert_eq(str_is_alphanum(str), 1);
}

Test(string_managent, str_is_alphanumeric_false)
{
    char *str = "12345 a";

    cr_assert_eq(str_is_alphanum(str), 0);
}

Test(string_managent, str_start_with_true)
{
    char *str = "Hello World";

    cr_assert_eq(str_start_with(str, "Hello"), 1);
}

Test(string_managent, str_start_with_false)
{
    char *str = "Hello World";

    cr_assert_eq(str_start_with(str, "Hello1"), 0);
}

Test(string_managent, str_end_with_true)
{
    char *str = "Hello World";

    cr_assert_eq(str_end_with(str, "World"), 1);
}

Test(string_managent, str_end_with_false)
{
    char *str = "Hello World";

    cr_assert_eq(str_end_with(str, "World1"), 0);
}