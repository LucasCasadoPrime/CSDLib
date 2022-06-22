/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** linked_list
*/

// Simple linked_list management

#include "../include/include.h"

// content of a new node
typedef struct node_s {
    void* data;
    struct node_s *next;
} node_t;

// create a new node at the beginning of the list
node_t *push_front_ll(node_t *head, void* data) {
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

// create a new node at the end of the list
node_t *push_back_ll(node_t *head, void* data)
{
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    node_t *tmp = head;
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
        head = new_node;
    else {
        while(tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new_node;
    }
    return(head);
}

// remove the first node of the list
node_t *pop_front_ll(node_t *head)
{
    node_t *tmp = head;
    head = head->next;
    free(tmp);
    return(head);
}

// remove the last node of the list
node_t *pop_back_ll(node_t *head)
{
    node_t *tmp = head;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    free(tmp->next);
    tmp->next = NULL;
    return(head);
}

// print the linked_list
node_t *print_ll(node_t *list) {
    node_t *tmp = list;
    while (tmp != NULL) {
        printf("%s", (char *)tmp->data);
        tmp = tmp->next;
    }
    return list;
}

// int main(){
//     node_t *list = NULL;

//     list = push_back_ll(list, "Hello");
//     list = push_front_ll(list, "World");
//     list = push_back_ll(list, "!");
//     list = pop_front_ll(list);
//     list = pop_back_ll(list);

//     print_ll(list);

//     return 0;
// }