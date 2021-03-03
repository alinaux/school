#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    // Test "ft_create_elem"
    int x = 10;
    t_list* int_list = ft_create_elem(&x);
    printf("One element list:\n");
    printf("%d\n", *(int*)int_list->data);

    char y = 'a';
    t_list* char_list = ft_create_elem(&y);

    printf("Once more:\n");
    printf("%c\n\n", *(char*)char_list->data);


    // Test "ft_list_push_front"
    int a = 1;
    char b = '!';
    float c = 0.1337;
    t_list* big_list = ft_create_elem(&c);
    ft_list_push_front(&big_list, &b);
    ft_list_push_front(&big_list, &a);

    printf("3 elements list:\n");
    printf("{%d, ", *(int*)big_list->data);
    printf("%c, ", *(char*)big_list->next->data);
    printf("%f}\n\n", *(float*)big_list->next->next->data);


    // Test "ft_list_size"
    printf("It has size of %d\n\n", ft_list_size(big_list));


    // Test "ft_list_last"
    printf("Data in last elements of created lists: %d, %c, %f\n\n", *(int*)ft_list_last(int_list)->data,
                                                                     *(char*)ft_list_last(char_list)->data,
                                                                     *(float*)ft_list_last(big_list)->data);
    

    // Test "ft_list_push_back"
    ft_list_push_back(&big_list, &a);
    ft_list_push_back(&big_list, &a);
    printf("After 2 pushbacks: {%d, %c, %f, %d, %d}\n\n", *(int*)big_list->data,
                                                          *(char*)big_list->next->data,
                                                          *(float*)big_list->next->next->data,
                                                          *(int*)big_list->next->next->next->data,
                                                          *(int*)big_list->next->next->next->next->data);

    return 0;
}
