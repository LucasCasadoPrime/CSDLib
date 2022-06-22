/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** array_str_management
*/

#ifndef ARRAY_STR_MANAGEMENT_H_
#define ARRAY_STR_MANAGEMENT_H_

#include "../includes/include.h"

/*! \file array_str_management.h
    \brief Documentation about CSDLib's array of strings management.
*/

/*! \fn char **push_back_str(char **array, char *str, int arr_size)
    \brief Push string at the end of the array.
    \param array The array of strings.
    \param str The string to push.
    \param arr_size The size of the array.
    \return The new array of strings.
*/
char **push_back_str(char **arr, char *str, int arr_size);

/*! \fn char **pop_back_str(char **array, int arr_size)
    \brief Pop a string at the beginning of the array.
    \param array The array of strings.
    \param arr_size The size of the array.
    \return The new array of strings.
*/
char **push_front_str(char **arr, char *str, int arr_size);

/*! \fn char **pop_back_str(char **array, int arr_size)
    \brief Pop a string at the end of the array.
    \param array The array of strings.
    \param arr_size The size of the array.
    \return The new array of strings.
*/
char **pop_back_str(char **arr, int arr_size);

/*! \fn char **pop_front_str(char **array, int arr_size)
    \brief Pop a string at the beginning of the array.
    \param array The array of strings.
    \param arr_size The size of the array.
    \return The new array of strings.
*/
char **pop_front_str(char **arr, int arr_size);

/*! \fn char **insert_str(char **array, char *str, int index, int arr_size)
    \brief Insert a string at the index of the array.
    \param array The array of strings.
    \param str The string to insert.
    \param index The index of the string to insert.
    \param arr_size The size of the array.
    \return The new array of strings.
*/
char **insert_str(char **arr, char *str, int index, int arr_size);

/*! \fn char **delete_str(char **array, int index, int arr_size)
    \brief Delete a string at the index of the array.
    \param array The array of strings.
    \param index The index of the string to delete.
    \param arr_size The size of the array.
    \return The new array of strings.
*/
char **delete_str(char **arr, int arr_size, int val_pos);

/*! \fn int my_is_sep(const char c, const char *sep)
    \brief Check if a character is a separator.
    \param c The character to check.
    \param sep The separator.
    \return 1 if the character is a separator, 0 otherwise.
*/
int my_is_sep(const char c, const char *separator);

/*! \fn int get_nb_words(char *str, const char *sep)
    \brief Get the number of words in a string.
    \param str The string to check.
    \param sep The separator.
    \return The number of words.
*/
int get_nb_words(char *str, const char *separator);


/*! \fn char **my_str_to_word_array(char *str, const char *sep)
    \brief Convert a string to an array of strings.
    \param str The string to convert.
    \param sep The separator.
    \return The array of strings.
*/
char **my_str_to_word_array(char *str, const char *separator);

#endif /* !ARRAY_STR_MANAGEMENT_H_ */