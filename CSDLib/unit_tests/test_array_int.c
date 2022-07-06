/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** test_array_int
*/

#include "../includes/array_int_management.h"


Test(array_int_management, Nelems)
{
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    cr_assert_eq(array_size, 5);
}

Test(array_int_management, push_back_int)
{
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    int *new_array = push_back_int(array, 6, array_size);
    cr_assert_eq(new_array[array_size], 6);
}

Test(array_int_management, push_front_int)
{
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    int *new_array = push_front_int(array, 6, array_size);
    cr_assert_eq(new_array[0], 6);
}

Test(array_int_management, pop_back_int)
{
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    int *new_array = pop_back_int(array, array_size);
    cr_assert_eq(new_array[array_size-2], 4);
}

Test(array_int_management, pop_front_int)
{
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    int *new_array = pop_front_int(array, array_size);
    cr_assert_eq(new_array[0], 2);
}

Test(array_int_management, insert_int)
{
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    int *new_array = insert_int(array, 6, array_size, 3);
    cr_assert_eq(new_array[3], 6);
}

Test(array_int_management, delete_int)
{
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    int *new_array = delete_int(array, 3, array_size);
    cr_assert_eq(new_array[3], 5);
}