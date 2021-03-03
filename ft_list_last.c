#include "ft_list.h"

t_list* ft_list_last(t_list* begin_list) {
    t_list* last = begin_list;
    while (last->next != NULL) {
        last = last->next;
    }
    return last;
}