/*
** EPITECH PROJECT, 2022
** C
** File description:
** string_management
*/

// Manage easyly the strings

#include "../includes/include.h"

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
char *replace_str(char *str, char *str2)
{
    str = malloc(sizeof(char) * (strlen(str2) + 1));
    for (int i = 0; str2[i] != '\0'; i++)
        str[i] = str2[i];
    str[strlen(str2)] = '\0';
    
    return (str);
}

// Replace all occurences of a char in a string but can't delete the char
char *replace_char(char *str, char c1, char c2)
{   
    char *new_str = malloc(sizeof(char) * (strlen(str) + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c1)
            new_str[i] = c2;
        else
            new_str[i] = str[i];
    }

    new_str[strlen(str)] = '\0';
    return (new_str);
}

// Count the number of occurences of a char in a string
int count_char(char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            count++;
    }
    return (count);
}

// Count the number of occurences of a substr in a string
int count_substr(char *str, char *substr)
{
    int count = 0;
    int len = strlen(str);
    int len2 = strlen(substr);

    for (int i = 0; i < len; i++) {
        if (str[i] == substr[0]) {
            for (int j = 0; j < len2; j++) {
                if (str[i + j] != substr[j])
                    break;
                if (j == len2 - 1)
                    count++;
            }
        }
    }
    return (count);
}


// Delete all occurences of a char in a string
char *delete_char(char *str, char c)
{
    char *new_str = malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;

    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] != c) {
            new_str[i] = str[k];
            i++;
        }
    }
    return (new_str);
}

// Insert a char in a string at a specific index
char *insert_char(char *str, char c, int pos)
{
    int len = strlen(str);
    char *new_str = malloc(sizeof(char) * (len + 2));

    for (int i = 0; i < pos; i++)
        new_str[i] = str[i];
    new_str[pos] = c;
    for (int i = pos; str[i]; i++)
        new_str[i + 1] = str[i];
    new_str[len + 1] = '\0';
    return (new_str);
}
