#include <stdlib.h>
#include "lists.h"
/**
* check_cycle - checks if a linked list contains a cycle
* @list: linked list to check
*
* Return: 1 if the list has a cycle, 0 if it doesn't
*/
int check_cycle(listint_t *list)
{
listint_t *sl, *fa;
if (list == NULL || list->next == NULL)
return (0);
sl = list->next;
fa = list->next->next;
while (sl && fa && fa->next)
{
if (sl == fa)
return (1);
sl = sl->next;
fa = fa->next->next;
}
return (0);
}
