#include <stddef.h>
#include <stdlib.h>

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct t_list {
    void* data;
    struct t_list* next;
} t_list;

t_list* ft_create_elem(void* data) {
    t_list* list = malloc(sizeof(t_list));
    list->data = data;
    list->next = NULL;
    return list;
}

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

int ft_list_size(t_list* begin_list) {
    int size = 0;
    while (begin_list != NULL) {
        begin_list = begin_list->next;
        ++size;
    }
    return size;
}

t_list* ft_list_last(t_list* begin_list) {
    t_list* last = begin_list;
    while (last->next != NULL) {
        last = last->next;
    }
    return last;
}

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

#endif