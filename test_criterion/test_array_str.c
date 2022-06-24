/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** test_array_str
*/

#include "../includes/array_str_management.h"

Test(string_array_management, push_back_str)
{
    char **str_array = malloc(sizeof(char *) * (2));
    char **new_str_array = NULL;

    str_array[0] = strdup("test");
    str_array[1] = strdup("test2");
    new_str_array = push_back_str(str_array, "test3", 2);

    cr_assert_str_eq(new_str_array[2], "test3");
}

Test(string_array_management, push_front_str)
{
    char **str_array = malloc(sizeof(char *) * (2));
    char **new_str_array = NULL;

    str_array[0] = strdup("test");
    str_array[1] = strdup("test2");
    new_str_array = push_front_str(str_array, "test3", 2);

    cr_assert_str_eq(new_str_array[0], "test3");
}

Test(string_array_management, insert_str)
{
    char **str_array = malloc(sizeof(char *) * (2));
    char **new_str_array = NULL;

    str_array[0] = strdup("test");
    str_array[1] = strdup("test2");
    new_str_array = insert_str(str_array, "test3", 2, 1);

    cr_assert_str_eq(new_str_array[1], "test3");
}

Test(string_array_management, pop_back_str)
{
    char **str_array = malloc(sizeof(char *) * (2));
    char **new_str_array = NULL;

    str_array[0] = strdup("test");
    str_array[1] = strdup("test2");
    new_str_array = pop_back_str(str_array, 2);

    cr_assert_str_eq(new_str_array[0], "test");
}

Test(string_array_management, pop_front_str)
{
    char **str_array = malloc(sizeof(char *) * (2));
    char **new_str_array = NULL;

    str_array[0] = strdup("test");
    str_array[1] = strdup("test2");
    new_str_array = pop_front_str(str_array, 2);

    cr_assert_str_eq(new_str_array[0], "test2");
}
Test(string_array_management, delete_str)
{
    char **str_array = malloc(sizeof(char *) * (2));
    char **new_str_array = NULL;

    str_array[0] = strdup("test");
    str_array[1] = strdup("test2");
    new_str_array = delete_str(str_array, 2, 1);

    cr_assert_str_eq(new_str_array[0], "test");
}