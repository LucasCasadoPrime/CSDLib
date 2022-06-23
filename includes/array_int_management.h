/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** array_int_management
*/

#ifndef ARRAY_INT_MANAGEMENT_H_
#define ARRAY_INT_MANAGEMENT_H_

#include "include.h"


/*! \file array_int_management.h
    \brief Documentation about CSDLib's array of int management.
*/

/*! \fn int get_array_size(int *array)
    \brief Get the size of an array.
    \param array The array.
    \return The size of the array.
*/
int get_array_size(int *array);

/*! \fn int *push_back(int *arr, int val, int arr_size)
    \brief Append int at the end of tab.
    \param arr The array.
    \param val The value to add.
    \param arr_size The size of the array.
    \return The new array with the value added.
*/
int *push_back(int *arr, int val, int arr_size);

/*! \fn int *push_front(int *arr, int val, int arr_size)
    \brief Append int at the begining of tab.
    \param arr The array.
    \param val The value to add.
    \param arr_size The size of the array.
    \return The new array with the value added.
*/
int *push_front(int *arr, int val, int arr_size);

/*! \fn int *pop_back(int *arr, int arr_size)
    \brief Remove the last int of the array.
    \param arr The array.
    \param arr_size The size of the array.
    \return The new array without the last int.
*/
int *pop_back(int *arr, int arr_size);

/*! \fn int *pop_front(int *arr, int arr_size)  
    \brief Remove the first int of the array.
    \param arr The array.
    \param arr_size The size of the array.
    \return The new array without the first int.
*/
int *pop_front(int *arr, int arr_size);

/*! \fn int *insert_at(int *arr, int val, int index, int arr_size)
    \brief Insert int at the index of the array.
    \param arr The array.
    \param val The value to add.
    \param index The index where to insert the value.
    \param arr_size The size of the array.
    \return The new array with the value added.
*/
int *insert(int *arr, int val, int arr_size, int val_pos);

/*! \fn int *remove_at(int *arr, int index, int arr_size)
    \brief Remove int at the index of the array.
    \param arr The array.
    \param index The index where to remove the value.
    \param arr_size The size of the array.
    \return The new array without the value removed.
*/
int *delete_value(int *arr, int val, int arr_size);

#endif /* !ARRAY_INT_MANAGEMENT_H_ */
