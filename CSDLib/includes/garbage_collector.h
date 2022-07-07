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


/*! \fn free_garbage_collector()
    \brief free the garbage collector list lauch wit attribute destructor
*/
void free_garbage_collector(void)__attribute__((destructor));

/*! \fn void *my_malloc(size_t size)
    \brief malloc with garbage collector
    \param size size of the malloc
    \return the malloced memory
*/
void *my_malloc(size_t size);

#endif /* !GARBAGE_COLLECTOR_H_ */
