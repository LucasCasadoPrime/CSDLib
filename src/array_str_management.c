/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** array_str_management
*/

// Simple str array management

#include "../includes/array_str_management.h"

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

// get separtor you want
// Code of Laurent Amat (@github: Lqvrent)
int my_is_sep(const char c, const char *separator)
{
    int is_sep = 0;

    for (int j = 0; separator[j] != 0; j++) {
        if (c == separator[j]) {
            is_sep = 1;
            break;
        }
    }
    return (is_sep);
}

// get number of words in a string
// Code of Laurent Amat (@github: Lqvrent)
int get_nb_words(char *str, const char *separator)
{
    int is_sep = 0;
    int nb_words = 0;
    int nb_chars = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        is_sep = my_is_sep(str[i], separator);
        if (is_sep == 0)
            nb_chars += 1;
        if ((is_sep == 1 && nb_chars > 0) || (is_sep == 0 && str[i+1] == 0)) {
            nb_words += 1;
            nb_chars = 0;
        }
    }
    return (nb_words);
}


// split a string into an array of words
// Code of Laurent Amat (@github: Lqvrent)
char **my_str_to_word_array(char *str, const char *separator)
{
    char **array = malloc(sizeof(char *) * (get_nb_words(str, separator) + 1));
    int is_sep = 0;
    int row = 0;
    int nb_chars = 0;
    int to = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        is_sep = my_is_sep(str[i], separator);
        nb_chars = (is_sep == 0) ? nb_chars + 1 : nb_chars;
        if ((is_sep == 1 && nb_chars > 0) || (is_sep == 0 && str[i+1] == 0)) {
            array[row] = malloc(sizeof(char) * nb_chars + 1);
            if (is_sep == 0)
                to = 1;
            array[row] = strncpy(array[row], &str[i-nb_chars+to], nb_chars);
            row++;
            nb_chars = 0;
        }
    }
    return (array);
}
