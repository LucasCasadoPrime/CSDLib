/*
** EPITECH PROJECT, 2022
** C
** File description:
** string_management
*/

// Manage easyly the strings

#include "../include/include.h"


// Cut a string a the index number you want 
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


// Remplace a string by another one
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