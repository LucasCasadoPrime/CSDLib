/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** linked_list
*/

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include "CSDLib.h"

/*! \file linke_list.h
    \brief Documentation about CSDLib's linked list.
*/

/*! \var typedef struct node_s node_t
    \brief The node of the linked list.
*/
typedef struct node_s {
    /*! \var void *data
        \brief The data of the node.
    */
    void *data;
    /*! \var node_t *next
        \brief Pointer to the next node of the linked list.
    */
    struct node_s *next;
} node_t;


/*! \fn node_t *push_back_ll(node_t *head, void *data)
    \brief Add a node at the end of a linked list.
    \param list The linked list.
    \param data The data to add.
    \return The new linked list.
*/
node_t *push_back_ll(node_t *head, void* data);


/*! \fn node_t *push_front_ll(node_t *head, void *data)
    \brief Add a node at the beginning of a linked list.
    \param list The linked list.
    \param data The data to add.
    \return The new linked list.
*/
node_t *push_front_ll(node_t *head, void* data);

/*! \fn node_t *pop_back_ll(node_t *head)
    \brief Remove the last node of a linked list.
    \param list The linked list.
    \return The new linked list.
*/
node_t *pop_back_ll(node_t *head);

/*! \fn node_t *pop_front_ll(node_t *list)
    \brief Remove the first node of a linked list.
    \param list The linked list.
    \return The new linked list.
*/
node_t *pop_front_ll(node_t *head);

/*! \fn node_t * add_node_ll(node_t *head, void *data, node_t *prev, node_t *next)
    \brief Add a node in a linked list.
    \param list The linked list.
    \param data The data to add.
    \param prev The node preceding the node where you want to put it.
    \param next The node following the node where you want to put it.
    \return The new linked list.
*/
node_t *add_node_ll(node_t *head, void* data, node_t *prev, node_t *next);

/*! \fn node_t *remove_ll(node_t *head, node_t *node)
    \brief Remove a node from a linked list.
    \param list The linked list.
    \param node The node to remove.
    \return The new linked list.
*/
node_t *remove_ll(node_t *head, void* data);

#endif /* !LINKED_LIST_H_ */
