/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** garbage_collector
*/

#ifndef GARBAGE_COLLECTOR_H_
#define GARBAGE_COLLECTOR_H_

typedef struct garbage_collector_s {
    void *data;
    struct garbage_collector_s *next;
} garbage_collector_t;

void free_garbage_collector(void)__attribute__((destructor));

#endif /* !GARBAGE_COLLECTOR_H_ */
