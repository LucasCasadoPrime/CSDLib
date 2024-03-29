/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** array_int_management
*/

#include "../includes/CSDLib.h"

int *push_back_int(int *arr, int val, int arr_size)
{
    int *new_arr = my_malloc(sizeof(int) * (arr_size + 1));

    for (int i = 0; i < arr_size+1; i++)
        new_arr[i] = arr[i];
    new_arr[arr_size] = val;
    return (new_arr);
}

int *push_front_int(int *arr, int val, int arr_size)
{
    int *new_arr = my_malloc(sizeof(int) * (arr_size + 2));
    arr_size = arr_size + 1;

    for (int i = 0; i < arr_size; i++)
        new_arr[i + 1] = arr[i];
    new_arr[0] = val;
    return (new_arr);
}

int *insert_int(int *arr, int val, int arr_size, int val_pos)
{
    int *new_arr = my_malloc(sizeof(int) * (arr_size + 1));

    for (int i = 0; i < arr_size; i++) {
        if (i<val_pos)
            new_arr[i] = arr[i];
        else if (i > val_pos)
            new_arr[i+1] = arr[i];
        else {
            new_arr[val_pos] = val;
            new_arr[val_pos+1] = arr[i];
        }
    }
    return (new_arr);
}

int *pop_back_int(int *arr, int arr_size)
{
    int *new_arr = my_malloc(sizeof(int) * (arr_size - 1));

    for (int i = 0; i < arr_size - 1; i++)
        new_arr[i] = arr[i];
    return (new_arr);
}

int *pop_front_int(int *arr, int arr_size)
{
    int *new_arr = my_malloc(sizeof(int) * (arr_size - 1));

    for (int i = 0; i < arr_size - 1; i++)
        new_arr[i] = arr[i + 1];
    return (new_arr);
}

int *delete_int(int *arr, int val, int arr_size)
{
    int i = 0;
    int j = 0;
    int *new_arr = my_malloc(sizeof(int) * (arr_size-1));

    for (i = 0; i < arr_size; i++) {
        if (arr[i] != val) {
            new_arr[j] = arr[i];
            j++;
        }
    }
    return (new_arr);
}

int foldl(int *arr, int arr_size) {
    int res = 0;

    for (int i = 0; i < arr_size; i++)
        res += arr[i];
    return (res);
}