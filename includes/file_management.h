/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** file_management
*/

#ifndef FILE_MANAGEMENT_H_
#define FILE_MANAGEMENT_H_

#include "include.h"

/*! \file array_str_management.h
    \brief Documentation about CSDLib's files management.
*/

/*! \fn FILE *open_file(char *file_name, char *mode)
    \brief Open a file.
    \param file_name The name of the file.
    \param mode The mode of to open the file.
    \return The file.
*/
FILE *open_file(char *file_name, char *mode);

/*! \fn delete_file(char *file_name)
    \brief Delete a file.
    \param file_name The name of the file.
*/
void delete_file(char *file_name);

/*! \fn char *read_file(char *file_name)
    \brief Read a file.
    \param file_name The name of the file.
    \return The content of the file.
*/
char *read_file(char *file_name);

/*! \fn void write_string_in_file(char *file_name, char *string)
    \brief Write a string in a file.
    \param file_name The name of the file.
    \param string The string to write.
*/
void write_str_in_file(FILE *file, char *str);

/*! \fn void write_int_in_file(char *file_name, int number)
    \brief Write an int in a file.
    \param file_name The name of the file.
    \param number The int to write.
*/
void write_int_in_file(FILE *file, int number);

/*! \fn void write_char_in_file(char *file, char c)
    \brief Write a char in a file.
    \param file The name of the file.
    \param c The char to write.
*/
void write_char_in_file(FILE *file, char c);


/*! \fn void print_file(char *file)
    \brief Print a file.
    \param file The name of the file.
*/
void print_file(FILE *file);

/*! \fn int file_size(char *file_name)
    \brief Get the size of a file.
    \param file_name The name of the file.
    \return The size of the file.
*/
int file_size(char *file_name);

/*! \fn char *file_type(char *file_name)
    \brief Get the type of a file.
    \param file_name The name of the file.
    \return The type of the file.
*/
char *file_type(char *file_name);

/*! \fn char *file_last_modif_time(char *file_name)
    \brief Get the last modification time of a file.
    \param file_name The name of the file.
    \return The last modification time of the file.
*/
char *file_last_modif_time(char *file_name);

/*! \fn char *file_change_status_time(char *file_name)
    \brief Get the last change status time of a file.
    \param file_name The name of the file.
    \return The last change status time of the file.
*/
char *file_change_status_time(char *file_name);

/*! \fn char *file_acces_time(char *file_name)
    \brief Get the last access time of a file.
    \param file_name The name of the file.
    \return The last access time of the file.
*/
char *file_acces_time(char *file_name);

/*! \fn get_nb_lines(char *file_name)
    \brief Get the number of lines in a file.
    \param file_name The name of the file.
    \return The number of lines in the file.
*/
int get_nb_lines(char *file_name);


#endif /* !FILE_MANAGEMENT_H_ */
