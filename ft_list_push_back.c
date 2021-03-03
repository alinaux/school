#include "ft_list.h"

void ft_list_push_back(t_list** begin_list, void* data) {
    if (begin_list == NULL) {
        t_list* back_node = ft_create_elem(data);
        back_node->data = data;
        begin_list = &back_node;
    } else {
        t_list* last_node = *begin_list;
        while (last_node->next != NULL) {
            last_node = last_node->next;
        }
        t_list* new_node = ft_create_elem(data);
        last_node->next = new_node;
    }
}