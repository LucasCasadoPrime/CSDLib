/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** linked_list
*/

// Simple linked_list management

#include "../includes/CSDLib.h"


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

// add node between two nodes
node_t *add_node_ll(node_t *head, void* data, node_t *prev, node_t *next)
{
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = next;
    prev->next = new_node;
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

// remove a node from the list
node_t *remove_ll(node_t *head, void* data)
{
    node_t *tmp = head;
    while (tmp->next != NULL) {
        if (tmp->next->data == data) {
            tmp->next = tmp->next->next;
            return(head);
        }
        tmp = tmp->next;
    }
    return(head);
}

// reverse the list
node_t *reverse_ll(node_t *head)
{
    node_t *tmp = head;
    node_t *prev = NULL;
    node_t *next = NULL;

    while (tmp != NULL) {
        next = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = next;
    }
    head = prev;
    return(head);
}

// swap two nodes between two lists
void swap_node_in_list(node_t *node1, node_t *node2)
{
    void *tmp = node1->data;
    node1->data = node2->data;
    node2->data = tmp;
}

// bubble sort the list
node_t *bubble_sort_ll(node_t *head)
{
    node_t *tmp = head;
    node_t *tmp2 = head;

    while (tmp != NULL) {
        tmp2 = tmp;
        while (tmp2 != NULL) {
            if (tmp->data > tmp2->data)
                swap_node_in_list(tmp, tmp2);
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    return(head);
}

// print the list content depending on the type of data
void print_ll(node_t *head , char *mode)
{
    node_t *tmp = head;

    while (tmp != NULL) {
        if (strcmp(mode, "char *") == 0) 
            printf("%s\n", (char *)tmp->data);
        else if (strcmp(mode, "int") == 0)
            printf("%d\n", *((int*)&tmp->data));
        else if (strcmp(mode, "long") == 0)
            printf("%ld\n", *((long*)&tmp->data));
        else if (strcmp(mode, "long long") == 0)
            printf("%lld\n", *((long long*)&tmp->data));
        else if (strcmp(mode, "short") == 0)
            printf("%hd\n", *((short*)&tmp->data));
        else if (strcmp(mode, "char") == 0)
            printf("%c\n", *((char*)&tmp->data));
        tmp = tmp->next;
    }
}

// Source of help : https://www.codegrepper.com/code-examples/c/linked++list+in+c