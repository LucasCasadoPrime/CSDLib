/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** array_int_management
*/

#ifndef ARRAY_INT_MANAGEMENT_H_
#define ARRAY_INT_MANAGEMENT_H_

#include "CSDLib.h"


/*! \file array_int_management.h
    \brief Documentation about CSDLib's array of int management.
*/


/*! \def NELEMS(x)
    \brief Macro to get the number of elements in an array.
    \param x The array.
    \return The number of elements in the array.
*/
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))


/*! \fn int get_array_size(int *array)
    \brief Get the size of an array.
    \param array The array.
    \return The size of the array.
*/
int get_array_size(int *array);

/*! \fn int *push_back_int(int *arr, int val, int arr_size)
    \brief Append int at the end of tab.
    \param arr The array.
    \param val The value to add.
    \param arr_size The size of the array.
    \return The new array with the value added.
*/
int *push_back_int(int *arr, int val, int arr_size);

/*! \fn int *push_front_int(int *arr, int val, int arr_size)
    \brief Append int at the begining of tab.
    \param arr The array.
    \param val The value to add.
    \param arr_size The size of the array.
    \return The new array with the value added.
*/
int *push_front_int(int *arr, int val, int arr_size);

/*! \fn int *pop_back_int(int *arr, int arr_size)
    \brief Remove the last int of the array.
    \param arr The array.
    \param arr_size The size of the array.
    \return The new array without the last int.
*/
int *pop_back_int(int *arr, int arr_size);

/*! \fn int *pop_front_int(int *arr, int arr_size)  
    \brief Remove the first int of the array.
    \param arr The array.
    \param arr_size The size of the array.
    \return The new array without the first int.
*/
int *pop_front_int(int *arr, int arr_size);

/*! \fn int *insert_at(int *arr, int val, int index, int arr_size)
    \brief Insert int at the index of the array.
    \param arr The array.
    \param val The value to add.
    \param index The index where to insert the value.
    \param arr_size The size of the array.
    \return The new array with the value added.
*/
int *insert_int(int *arr, int val, int arr_size, int val_pos);


/*! \fn int *delete_int(int *arr, int val, int arr_size)
    \brief Remove the value of the array.
    \param arr The array.
    \param val The value to remove.
    \param arr_size The size of the array.
    \return The new array without the value.
*/
int *delete_int(int *arr, int val, int arr_size);


#endif /* !ARRAY_INT_MANAGEMENT_H_ */
