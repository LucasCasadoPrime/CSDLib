/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** string_management
*/

#ifndef STRING_MANAGEMENT_H_
#define STRING_MANAGEMENT_H_

#include "include.h"

/*! \file string_management.h
    \brief Documentation about CSDLib's string management.
*/

/*! \fn char *cut_str(int num, char *str)
    \brief Cut a string at the index given.
    \param num The index to cut the string at.
    \param str The string to cut.
    \return The cut string.
*/
char *cut_str(int num, char *str);

/*! \fn char *replace_str(char *str, char *to_replace)
    \brief Replace a string by another one.
    \param str The string to replace.
    \param to_replace The string to replace.
    \param replace_by The string to replace with.
    \return The string replaced.
*/
char *replace_str(char *str, char *str2);

/*! \fn int count_char(char *str, char c)
    \brief Count the number of times a character appears in a string.
    \param str The string to count the character in.
    \param c The character to count.
    \return The number of times the character appears in the string.
*/
int count_char(char *str, char c);

/*! \fn int count_substr(char *str, char *substr)
    \brief Count the number of times a substring appears in a string.
    \param str The string to count the substring in.
    \param substr The substring to count.
    \return The number of times the substring appears in the string.
*/
int count_substr(char *str, char *substr);

/*! \fn char *delete_char(char *str, char c)
    \brief Delete a character from a string.
    \param str The string to delete the character from.
    \param c The character to delete.
    \return The string without the character.
*/
char *delete_char(char *str, char c);

/*! \fn char *insert_char(char *str, char c, int pos)
    \brief Insert a character in a string at a given position.
    \param str The string to insert the character in.
    \param c The character to insert.
    \param pos The position to insert the character at.
    \return The string with the character inserted.
*/
char *insert_char(char *str, char c, int pos);


#endif /* !STRING_MANAGEMENT_H_ */
