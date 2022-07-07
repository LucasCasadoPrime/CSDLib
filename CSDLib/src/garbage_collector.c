/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** garbage_collector
*/

#include "../includes/CSDLib.h"

static void *garbage_collector_list = NULL;

void *my_malloc(size_t size)
{
    void *ptr = malloc(size);
    if (ptr == NULL) {
        fprintf(stderr, "malloc error\n");
        exit(1);
    }
    garbage_collector_t *gc = malloc(sizeof(garbage_collector_t));
    if (gc == NULL) {
        fprintf(stderr, "malloc error\n");
        exit(1);
    }
    gc->data = ptr;
    gc->next = garbage_collector_list;
    garbage_collector_list = gc;
    return ptr;
}

void free_garbage_collector(void)
{
    garbage_collector_t *gc = garbage_collector_list;
    while (gc != NULL) {
        garbage_collector_t *next = gc->next;
        free(gc->data);
        free(gc);
        gc = next;
    }
}