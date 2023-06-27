#include "sort.h"

/**
* insertion_sort_list - insertion sort list algorthms
* @list: list pointer
* Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
listint_t *curr, *swap, *tmp;

if (!list || *list == NULL)
return;
curr = *list;
if (curr->next == NULL)
return;
while (curr->next != NULL)
{
swap = curr->next;
if (curr->n > swap->n)
{
tmp = curr;
while (tmp != NULL && tmp->n > swap->n)
{
tmp->next = swap->next;
if (tmp->next != NULL)
tmp->next->prev = tmp;
swap->prev = tmp->prev;
if (swap->prev != NULL)
swap->prev->next = swap;
else
*list = swap;
tmp->prev = swap;
swap->next = tmp;
print_list(*list);
tmp = swap->prev;
}
continue;
}
curr = curr->next;
}
}
