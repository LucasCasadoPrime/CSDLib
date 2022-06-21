/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** file_management
*/

// simple file management

#include "../include/include.h"

// open a file
FILE *open_file(char *file_name, char *mode)
{
    FILE *file = fopen(file_name, mode);

    if (file == NULL) {
        printf("Error: file %s not found\n", file_name);
        exit(84);
    }
    return (file);
}

// write in a file
void write_file(FILE *file, char *str)
{
    fprintf(file, "%s", str);
}

// print a file
void print_file(FILE *file)
{
    char *str = NULL;
    size_t len = 0;

    while (getline(&str, &len, file) != -1)
        printf("%s", str);
    free(str);
} 

// get size of file
int file_size(char *file_name)
{
    struct stat *buf;
    buf = malloc(sizeof(struct stat));
    int file_size = 0;

    stat(file_name, buf);
    file_size = buf->st_size;
    free(buf);
    return(file_size);
}

// get type of file
char *file_type(char *file_name)
{
    struct stat *buf;
    buf = malloc(sizeof(struct stat));
    char *file_type = NULL;

    stat(file_name, buf);
    file_type = malloc(sizeof(char) * 10);
    if (S_ISREG(buf->st_mode))
        strcpy(file_type, "regular");
    else if (S_ISDIR(buf->st_mode))
        strcpy(file_type, "directory");
    else if (S_ISCHR(buf->st_mode))
        strcpy(file_type, "character");
    else if (S_ISBLK(buf->st_mode))
        strcpy(file_type, "block");
    else if (S_ISFIFO(buf->st_mode))
        strcpy(file_type, "fifo");
    else if (S_ISLNK(buf->st_mode))
        strcpy(file_type, "symbolic");
    else if (S_ISSOCK(buf->st_mode))
        strcpy(file_type, "socket");
    free(buf);
    return (file_type);
}

// get time file's last modification
char *file_lmodif(char *file_name)
{
    struct stat *buf;
    buf = malloc(sizeof(struct stat));
    char *file_time = NULL;

    stat(file_name, buf);
    file_time = malloc(sizeof(char) * 20);
    strftime(file_time, 20, "%d/%m/%Y %H:%M:%S", localtime(&buf->st_mtime));
    free(buf);
    return (file_time);
}