#include <stdio.h>
#include <CSDLib/CSDLib.h>

int main()
{
    printf("---------------------String_managemment.h----------------------------------\n\n");
    char *str = "Hello World!";
    print_file(open_file("asigment_str.txt", "r"));
    printf("\n");
    printf("The basic string is: %s\n", str);
    printf("Cut the string at index 5: %s\n", cut_str(5, str));
    printf("Replace the string with \"CSDLIB\": %s\n", replace_str(str, "CSDLIB"));
    printf("Replace the character 'l' with 'H': %s\n", replace_char(str, 'l', 'H'));
    printf("Count the number of 'H' in the string: %d\n", count_char(str, 'H'));
    printf("Insert the string \"CSDLib\" at index 5: %s\n", insert_substr(str, "CSDLib", 5));
    printf("Delete the char \"l\": %s\n", delete_char(str, 'l'));
    printf("Delete the str \"Hello \": %s\n", delete_substr(str, "Hello "));
    printf("Count the string \"Hello World!\": %d\n", count_substr(str, "Hello World!"));
    printf("Check if the string starts with \"Hello\": %d\n", str_start_with(str, "Hello"));
    printf("Check if the string ends with \"World!\": %d\n", str_end_with(str, "World!"));
    printf("Put the string in uppercase: %s\n", str_to_upper(str));
    printf("Put the string in lowercase: %s\n", str_to_lower(str));
    printf("Put the string in capitalized: %s\n", str_to_capital(str));
    printf("Put the string in reversed: %s\n", str_reverse(str));
    printf("Check if the string is a number: %d\n", str_is_numeric(str));
    printf("Check if the string is alpha: %d\n", str_is_alpha(str));
    printf("Check if the string is alphanumeric: %d\n\n", str_is_alphanum(str));
    
    
    printf("---------------------Array_int_management.h----------------------------------\n\n");
    print_file(open_file("array_int.txt", "r"));
    printf("\n\n");
    int array[5] = {1, 2, 3, 4, 5};
    int array_size = NELEMS(array);
    int *new_array = NULL; 
    printf("The array is: %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4]);
    printf("The array size is: %d\n", array_size);
    new_array = push_back_int(array, 6, array_size);
    printf("The new array after push_back_int the array is: %d, %d, %d, %d, %d, %d\n", new_array[0], new_array[1], new_array[2], new_array[3], new_array[4], new_array[5]);
    new_array = push_front_int(array, 6, array_size);
    printf("The new array after push_front_int the array is: %d, %d, %d, %d, %d, %d\n", new_array[0], new_array[1], new_array[2], new_array[3], new_array[4], new_array[5]);
    new_array = pop_back_int(array, array_size);
    printf("The new array after pop_back_int the array is: %d, %d, %d, %d\n", new_array[0], new_array[1], new_array[2], new_array[3]);
    new_array = pop_front_int(array, array_size);
    printf("The new array after pop_front_int the array is: %d, %d, %d, %d\n", new_array[0], new_array[1], new_array[2], new_array[3]);
    new_array = insert_int(array, 6, array_size, 2);
    printf("The new array after insert_int the array is: %d, %d, %d, %d, %d, %d\n", new_array[0], new_array[1], new_array[2], new_array[3], new_array[4], new_array[5]);
    new_array = delete_int(array, 2, array_size);
    printf("The new array after delete_int the array is: %d, %d, %d, %d\n\n", new_array[0], new_array[1], new_array[2], new_array[3]);
    
    
    printf("---------------------Array_str_management.h----------------------------------\n\n");
    char **str_array = my_malloc(sizeof(char *) * (2));
    char **new_str_array = NULL;
    str_array[0] = strdup("test");
    str_array[1] = strdup("test2");
    printf("The array is: %s, %s\n", str_array[0], str_array[1]);
    new_str_array = push_back_str(str_array, "test3", 2);
    printf("The new array after push_back_str the array is: %s, %s, %s\n", new_str_array[0], new_str_array[1], new_str_array[2]);
    new_str_array = push_front_str(str_array, "test4", 2);
    printf("The new array after push_front_str the array is: %s, %s, %s\n", new_str_array[0], new_str_array[1], new_str_array[2]);
    new_str_array = pop_back_str(str_array, 2);
    printf("The new array after pop_back_str the array is: %s\n", new_str_array[0]);
    new_str_array = pop_front_str(str_array, 2);
    printf("The new array after pop_front_str the array is: %s\n", new_str_array[0]);
    new_str_array = insert_str(str_array, "test5", 2, 1);
    printf("The new array after insert_str the array is: %s, %s\n", new_str_array[0], new_str_array[1]);
    new_str_array = delete_str(str_array, 2, 1);
    printf("The new array after delete_str the array is: %s\n\n", new_str_array[0]);
    
    
    printf("---------------------File_management.h----------------------------------\n\n");
    printf("This segment is complicate to show, so just check the file file_management.h in headers\n\n");
    
    
    printf("---------------------generic_system_linked_list.h----------------------------------\n\n");
    node_t *head = NULL;
    head = push_back_ll(head, (void*)2);
    head = push_back_ll(head, (void*)1);

    printf("The linked list is:\n");
    print_ll(head, "int");
    head = push_back_ll(head, (void*)3);
    printf("\nAfter push_back_ll the linked list is:\n");
    print_ll(head, "int");
    head = push_front_ll(head, (void*)4);
    printf("\nAfter push_front_ll the linked list is:\n");
    print_ll(head, "int");
    head = bubble_sort_ll(head);
    printf("\nAfter bubble_sort_ll the linked list is sorted:\n");
    print_ll(head, "int");
    head = pop_back_ll(head);
    printf("\nAfter pop_back_ll the linked list is:\n");
    print_ll(head, "int");
    head = pop_front_ll(head);
    printf("\nAfter pop_front_ll the linked list is:\n");
    print_ll(head, "int");
    head = add_node_ll(head, (void*)5, head->next, head->next->next);
    printf("\nAfter insert_ll the linked list is:\n");
    print_ll(head, "int");
    head = remove_ll(head, (void*)1);
    printf("\nAfter delete_ll the linked list is:\n");
    print_ll(head, "int");
    head = reverse_ll(head);
    printf("\nAfter reverse_ll the linked list is:\n");
    print_ll(head, "int");
    return (0);
}