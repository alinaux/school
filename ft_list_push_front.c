#include "ft_list.h"

void ft_list_push_front(t_list** begin_list, void* data) {
    if (begin_list == NULL) {
        t_list* front_node = ft_create_elem(data);
        front_node->data = data;
        begin_list = &front_node;
    } else {
        t_list* front_node = ft_create_elem(data);
        front_node->next = *begin_list;
        *begin_list = front_node;
    }
}