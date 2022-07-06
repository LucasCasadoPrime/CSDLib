/*
** EPITECH PROJECT, 2022
** CSDLib
** File description:
** test_linked_list
*/

#include "../includes/generic_system_linked_list.h"

Test(linked_list_management, push_back_ll)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test");
    cr_assert_str_eq(head->data, "test");
    head = push_back_ll(head, "test2");
    cr_assert_str_eq(head->data, "test");
    cr_assert_str_eq(head->next->data, "test2");
}

Test(linked_list_management, push_front_ll)
{
    node_t *head = NULL;
    head = push_front_ll(head, "test");
    cr_assert_str_eq(head->data, "test");
    head = push_front_ll(head, "test2");
    cr_assert_str_eq(head->data, "test2");
    cr_assert_str_eq(head->next->data, "test");
}

Test(linked_list_management, add_node_ll)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test");
    cr_assert_str_eq(head->data, "test");
    head = add_node_ll(head, "test2", head, head->next);
    head = add_node_ll(head, "test3", head->next, head->next->next);
    cr_assert_str_eq(head->data, "test");
    cr_assert_str_eq(head->next->data, "test2");
    cr_assert_str_eq(head->next->next->data, "test3");
}

Test(linked_list_management, pop_back_ll)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test");
    head = push_back_ll(head, "test2");
    cr_assert_str_eq(head->data, "test");
    cr_assert_str_eq(head->next->data, "test2");
    head = pop_back_ll(head);
    cr_assert_str_eq(head->data, "test");
}

Test(linked_list_management, pop_front_ll)
{
    node_t *head = NULL;
    head = push_front_ll(head, "test");
    head = push_front_ll(head, "test2");
    cr_assert_str_eq(head->data, "test2");
    cr_assert_str_eq(head->next->data, "test");
    head = pop_front_ll(head);
    cr_assert_str_eq(head->data, "test");
}

Test(linked_list_management, remove_ll)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test");
    head = push_back_ll(head, "test2");
    head = push_back_ll(head, "test3");
    head = remove_ll(head, "test2");
    cr_assert_str_eq(head->data, "test");
    cr_assert_str_eq(head->next->data, "test3");
}

Test(linked_list_management, reverse_ll)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test");
    head = push_back_ll(head, "test2");
    head = push_back_ll(head, "test3");
    head = reverse_ll(head);
    cr_assert_str_eq(head->data, "test3");
    cr_assert_str_eq(head->next->data, "test2");
    cr_assert_str_eq(head->next->next->data, "test");
}

Test(linked_list_management, swap_node_in_list)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test");
    head = push_back_ll(head, "test2");
    head = push_back_ll(head, "test3");
    node_t *node1 = head;
    node_t *node2 = head->next;
    
    swap_node_in_list(node1, node2);
    cr_assert_str_eq(head->data, "test2");
    cr_assert_str_eq(head->next->data, "test");
    cr_assert_str_eq(head->next->next->data, "test3");
}

Test(linked_list_management, bubble_sort_ll)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test2");
    head = push_back_ll(head, "test");
    head = push_back_ll(head, "test3");
    head = bubble_sort_ll(head);
    cr_assert_str_eq(head->data, "test");
    cr_assert_str_eq(head->next->data, "test2");
    cr_assert_str_eq(head->next->next->data, "test3");
}

Test(linked_list_management, print_ll)
{
    node_t *head = NULL;
    head = push_back_ll(head, "test");
    head = push_back_ll(head, "test2");
    head = push_back_ll(head, "test3");
    print_ll(head, "char *");
}