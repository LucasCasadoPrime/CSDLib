/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** string_management
*/

#ifndef STRING_MANAGEMENT_H_
#define STRING_MANAGEMENT_H_

#include "CSDLib.h"

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
    \return The replaced string.
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

/*! \fn char *insert_substr(char *str, char *substr, int pos)
    \brief Insert a substring at a given position.
    \param str The string to insert the substring in.
    \param substr The substring to insert.
    \param pos The position to insert the substring at.
    \return The string with the substring inserted.
*/
char *insert_substr(char *str, char *substr, int pos);

/*! \fn char *delete_substr(char *str, char *substr)
    \brief Delete a substring from a string.
    \param str The string to delete the substring from.
    \param substr The substring to delete.
    \return The string with the substring deleted.
*/
char *delete_substr(char *str, char *substr);

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

/*! \fn char *replace_char(char *str, char c1, char c2)
    \brief Replace all occurences of a character in a string.
    \param str The string to replace the character in.
    \param c1 The character to replace.
    \param c2 The character to replace with.
*/
char *replace_char(char *str, char c1, char c2);

/*! \fn str_to_lower(char *str)
    \brief Convert a string to lowercase.
    \param str The string to convert.
    \return The string in lowercase.
*/
char *str_to_lower(char *str);

/*! \fn str_to_upper(char *str)
    \brief Convert a string to uppercase.
    \param str The string to convert.
    \return The string in uppercase.
*/
char *str_to_upper(char *str);

/*! \fn char *str_to_capital(char *str)
    \brief capitalize the first and last letter of each word of a string.
    \param str The string to convert.
    \return The string in capital.
*/
char *str_to_capital(char *str);


/*! \fn char *str_reverse(char *str)
    \brief Reverse a string.
    \param str The string to reverse.
    \return The string reversed.
*/
char *str_reverse(char *str);


/*! \fn int str_is_alpha(char *str)
    \brief Check if a string is made of alphabetic characters.
    \param str The string to check.
    \return 1 if the string is made of alphabetic characters, 0 otherwise.
*/
int str_is_alpha(char *str);

/*! \fn int str_is_numeric(char *str)
    \brief Check if a string is made of numeric characters.
    \param str The string to check.
    \return 1 if the string is made of numeric characters, 0 otherwise.
*/
int str_is_numeric(char *str);

/*! \fn int str_is_alphanumeric(char *str)
    \brief Check if a string is made of alphanumeric characters.
    \param str The string to check.
    \return 1 if the string is made of alphanumeric characters, 0 otherwise.
*/
int str_is_alphanum(char *str);

/*! \fn int str_start_with(char *str, char *start)
    \brief Check if a string starts with a given string.
    \param str The string to check.
    \param start The string to check if it starts with.
    \return 1 if the string starts with the given string, 0 otherwise.
*/
int str_start_with(char *str, char *start);

/*! \fn int str_end_with(char *str, char *end)
    \brief Check if a string ends with a given string.
    \param str The string to check.
    \param end The string to check if it ends with.
    \return 1 if the string ends with the given string, 0 otherwise.
*/
int str_end_with(char *str, char *end);

#endif /* !STRING_MANAGEMENT_H_ */
