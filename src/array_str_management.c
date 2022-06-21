/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** array_str_management
*/

// Simple str array management

#include "../include/include.h"

// add a string to the end of the array
char **push_back_str(char **arr, char *str, int arr_size)
{
    char **new_arr = malloc(sizeof(char *) * (arr_size + 1));

    for (int i = 0; i < arr_size; i++) {
        new_arr[i] = malloc(sizeof(char));
        new_arr[i] = arr[i];
    }
    new_arr[arr_size]= str;

    return (new_arr);
}

// add a string to the beginning of the array
char **push_front_str(char **arr, char *str, int arr_size)
{
    char **new_arr = malloc(sizeof(char *) * (arr_size + 1));

    for (int i = 0; i < arr_size; i++) {
        new_arr[i+1] = malloc(sizeof(char));
        new_arr[i+1] = arr[i];
    }
    new_arr[0] = malloc(sizeof(char));
    new_arr[0]= str;

    return (new_arr);
}

// add a string to the array at the given index
char **insert_str(char **arr, char *str, int arr_size, int val_pos)
{
    char **new_arr = malloc(sizeof(char *) * (arr_size + 1));

    for (int i = 0; i < arr_size; i++) {
        if (i<val_pos) {
            new_arr[i] = malloc(sizeof(char *));
            new_arr[i] = arr[i];
        }
        else if (i==val_pos) {
            new_arr[val_pos] = malloc(sizeof(char *));
            new_arr[val_pos] = str;
        }
        else {
            new_arr[i] = malloc(sizeof(char *));
            new_arr[i] = arr[i];
        }
    }

    return (new_arr);
}

// remove a string at the end of the array
char **pop_back_str(char **arr, int arr_size)
{
    char **new_arr = malloc(sizeof(char *) * (arr_size - 1));
    arr_size = arr_size - 1;

    for (int i = 0; i < arr_size; i++) {
        new_arr[i] = malloc(sizeof(char *));
        new_arr[i] = arr[i];
    }

    return (new_arr);
}

// remove a string at the beginning of the array
char **pop_front_str(char **arr, int arr_size)
{
    char **new_arr = malloc(sizeof(char *) * (arr_size - 1));
    arr_size = arr_size - 1;
    
    for (int i = 0; i < arr_size; i++) {
        new_arr[i] = malloc(sizeof(char *));
        new_arr[i] = arr[i+1];
    }

    return (new_arr);
}

// remove a string at the given index
char **delete_str(char **arr, int arr_size, int val_pos)
{
    char **new_arr = malloc(sizeof(char *) * (arr_size - 1));
    arr_size = arr_size - 1;

    for (int i = 0; i < arr_size; i++) {
        if (i<val_pos) {
            new_arr[i] = malloc(sizeof(char *));
            new_arr[i] = arr[i];
        }
        else if (i==val_pos) {
            new_arr[val_pos] = malloc(sizeof(char *));
            new_arr[val_pos] = arr[val_pos+1];
        }
        else {
            new_arr[i] = malloc(sizeof(char *));
            new_arr[i] = arr[i+1];
        }
    }
    return(new_arr);
}

// int main(void)
// {

//     int size = 4;

//     char **arr = malloc(sizeof(char *) * (size + 1));
//     for (int i = 0; i < size; i++)
//         arr[i] = malloc(sizeof(char) * (size + 1));
//     arr[size] = NULL;

//     printf("---------  Before  --------------\n");
//         arr[0] = "Hello";
//         arr[1] = "world";
//         arr[2] = "WOOW";
//         arr[3] = "WAAW";

//     for (int i = 0; arr[i] != NULL; i++)
//         printf("%s\n", arr[i]);
    
//     printf("----------  After  --------------\n");
//     arr = delete_str(arr, size, 2);
//     for (int i = 0; arr[i]; i++)
//         printf("%s\n", arr[i]);
//     printf("-----------  END  ---------------\n");
// }