
/*
** EPITECH PROJECT, 2021
** Epitech-Jam-30.4.21
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cut_str(int num, char *str)
{
    int i = 0;
    int j = 0;
    char *new_str = malloc(sizeof(char) * (num + 1));

    while (str[i] != '\0') {
        if (i < num) {
            new_str[j] = str[i];
            j++;
        }
        i++;
    }
    new_str[j] = '\0';
    return (new_str);
}

char *remplace_str(char *str, char *str2)
{
    int sstr = strlen(str);
    int sstr2 = strlen(str2);

    if (sstr2 > sstr) {
        str = realloc(str, sizeof(char) * (sstr2 + 1));
        str[sstr2] = '\0';
        for (int i = 0; str2[i]; i++)
            str[i] = str2[i];
    } else {
        for (int i = 0; str2[i]; i++)
            str[i] = str2[i];
        str[sstr2] = '\0';
    }
    return (str);
}

int *push_back(int *arr, int val, int arr_size)
{
    int *new_arr = malloc(sizeof(int) * (arr_size + 1));

    for (int i = 0; i < arr_size+1; i++)
        new_arr[i] = arr[i];
    new_arr[arr_size] = val;

    return (new_arr);
}

int *push_front(int *arr, int val, int arr_size)
{
    int *new_arr = malloc(sizeof(int) * (arr_size + 2));
    arr_size = arr_size + 1;

    for (int i = 0; i < arr_size; i++)
        new_arr[i + 1] = arr[i];
    new_arr[0] = val;

    return (new_arr);
}

int *insert(int *arr, int val, int arr_size, int val_pos)
{
    int i = 0;
    arr_size = arr_size + 1;

    for (i = arr_size-1; i >= val_pos; i--)
        arr[i] = arr[i - 1];
    arr[val_pos - 1] = val;

    return(arr);
}

int *pop_back(int *arr, int arr_size)
{
    arr_size = arr_size - 1;
    int *new_arr = malloc(sizeof(int) * (arr_size+1));

    for (int i = 0; i < arr_size; i++)
        new_arr[i] = arr[i];
    new_arr[arr_size] = 0;

    return (new_arr);
}

int *pop_front(int *arr, int arr_size)
{
    int *new_arr = malloc(sizeof(int) * (arr_size - 1));

    for (int i = 0; i < arr_size - 1; i++)
        new_arr[i] = arr[i + 1];

    return (new_arr);
}

int *delete_value(int *arr, int val, int arr_size)
{
    int i = 0;
    int j = 0;
    int *new_arr = malloc(sizeof(int) * (arr_size-1));

    for (i = 0; i < arr_size; i++) {
        if (arr[i] != val) {
            new_arr[j] = arr[i];
            j++;
        }
    }

    return (new_arr);
}