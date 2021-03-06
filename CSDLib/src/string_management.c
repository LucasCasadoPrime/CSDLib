/*
** EPITECH PROJECT, 2022
** C
** File description:
** string_management
*/

#include "../includes/CSDLib.h"

char *cut_str(int num, char *str)
{
    int i = 0;
    int j = 0;
    char *new_str = my_malloc(sizeof(char) * (num + 1));

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

char *replace_str(char *str, char *str2)
{
    str = my_malloc(sizeof(char) * (strlen(str2) + 1));
    for (int i = 0; str2[i] != '\0'; i++)
        str[i] = str2[i];
    str[strlen(str2)] = '\0';
    return (str);
}

char *replace_char(char *str, char c1, char c2)
{   
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c1)
            new_str[i] = c2;
        else
            new_str[i] = str[i];
    }

    new_str[strlen(str)] = '\0';
    return (new_str);
}

int count_char(char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            count++;
    }
    return (count);
}

char *insert_substr(char *str, char *substr, int pos)
{
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + strlen(substr) + 1));
    int i = 0;

    for (int j = 0; str[j] != '\0'; j++) {
        if (j == pos) {
            for (int k = 0; substr[k] != '\0'; k++) {
                new_str[i] = substr[k];
                i++;
            }
        }
        new_str[i] = str[j];
        i++;
    }
    new_str[strlen(str) + strlen(substr)] = '\0';
    return (new_str);
}

char *delete_substr(char *str, char *substr)
{
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;
    int j = 0;

    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] != substr[i]) {
            new_str[j] = str[k];
            j++;
        }
        if (str[k] == substr[i]) {
            i++;
            if (substr[i] == '\0')
                i = 0;
        }
    }
    new_str[j] = '\0';
    return (new_str);
}

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

int str_start_with(char *str, char *substr)
{
    int len = strlen(str);
    int len2 = strlen(substr);

    if (len < len2)
        return (0);
    for (int i = 0; i < len2; i++) {
        if (str[i] != substr[i])
            return (0);
    }
    return (1);
}

int str_end_with(char *str, char *substr)
{
    int len = strlen(str);
    int len2 = strlen(substr);

    if (len < len2)
        return (0);
    for (int i = len - len2; i < len; i++) {
        if (str[i] != substr[i - len + len2])
            return (0);
    }
    return (1);
}

char *delete_char(char *str, char c)
{
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;

    for (int k = 0; str[k] != '\0'; k++) {
        if (str[k] != c) {
            new_str[i] = str[k];
            i++;
        }
    }
    return (new_str);
}

char *insert_char(char *str, char c, int pos)
{
    int len = strlen(str);
    char *new_str = my_malloc(sizeof(char) * (len + 2));

    for (int i = 0; i < pos; i++)
        new_str[i] = str[i];
    new_str[pos] = c;
    for (int i = pos; str[i]; i++)
        new_str[i + 1] = str[i];
    new_str[len + 1] = '\0';
    return (new_str);
}

char *str_to_lower(char *str)
{
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + 1));

    for (int i = 0; str[i]; i++)
        new_str[i] = tolower(str[i]);
    new_str[strlen(str)] = '\0';

    return (new_str);
}

char *str_to_upper(char *str)
{
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + 1));

    for (int i = 0; str[i]; i++)
        new_str[i] = toupper(str[i]);
    new_str[strlen(str)] = '\0';
    return (new_str);
}

char *str_to_capital(char *str)
{
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + 1));

    for (int i = 0; str[i]; i++) {
        if (i == 0)
            new_str[i] = toupper(str[i]);
        else if (str[i - 1] == ' ')
            new_str[i] = toupper(str[i]);
        else
            new_str[i] = str[i];
    }
    return (new_str);
}

char *str_reverse(char *str)
{
    char *new_str = my_malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;

    for (int k = strlen(str) - 1; k >= 0; k--)
        new_str[i++] = str[k];
    new_str[strlen(str)] = '\0';
    return (new_str);
}

int str_is_alpha(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return (0);
    }
    return (1);
}

int str_is_numeric(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}

int str_is_alphanum(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
            return (0);
    }
    return (1);
}