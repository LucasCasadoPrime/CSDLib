/*
** EPITECH PROJECT, 2021
** Epitech-Jam-30.4.21
** File description:
** main
*/


// Simple int array management

// Get the size of an array
int get_array_size(int *array)
{
    return(sizeof(array) / sizeof(array[0]));
}

// Append at the end of tab 
int *push_back(int *arr, int val, int arr_size)
{
    int *new_arr = malloc(sizeof(int) * (arr_size + 1));

    for (int i = 0; i < arr_size+1; i++)
        new_arr[i] = arr[i];
    new_arr[arr_size] = val;

    return (new_arr);
}

// Append at the begining of tab
int *push_front(int *arr, int val, int arr_size)
{
    int *new_arr = malloc(sizeof(int) * (arr_size + 2));
    arr_size = arr_size + 1;

    for (int i = 0; i < arr_size; i++)
        new_arr[i + 1] = arr[i];
    new_arr[0] = val;

    return (new_arr);
}

// Append at the index of tab
int *insert(int *arr, int val, int arr_size, int val_pos)
{
    int i = 0;
    arr_size = arr_size + 1;

    for (i = arr_size-1; i >= val_pos; i--)
        arr[i] = arr[i - 1];
    arr[val_pos - 1] = val;

    return(arr);
}


// Remove the last element of tab
int *pop_back(int *arr, int arr_size)
{
    arr_size = arr_size - 1;
    int *new_arr = malloc(sizeof(int) * (arr_size+1));

    for (int i = 0; i < arr_size; i++)
        new_arr[i] = arr[i];
    new_arr[arr_size] = 0;

    return (new_arr);
}


// Remove the first element of tab
int *pop_front(int *arr, int arr_size)
{
    int *new_arr = malloc(sizeof(int) * (arr_size - 1));

    for (int i = 0; i < arr_size - 1; i++)
        new_arr[i] = arr[i + 1];

    return (new_arr);
}


// Remove the value of tab 
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