#include "lists.h"
/**
* palindrome - check if is palindrome with recursion
* @a: a
* @b: b
*
* Return: 1 palindrome, 0 not palindrome
*/
int palindrome(listint_t **a, listint_t *b)
{
    int response;
    if (b != NULL)
    {
        response = palindrome(a, b->next);
        if (response != 0)
        {
            response = (b->n == (*a)->n);
            *a = (*a)->next;
            return (response);
        }
        return (0);
    }
    return (1);
}
/**
* is_palindrome - check if a singly linked list is a palindrome
* @head: head of a linked list
*
* Return: 1 palindrome, 0 not palindrome
*/
int is_palindrome(listint_t **head)
{
    if (head == NULL)
    {
        return (0);
    }
    return (palindrome(head, *head));
}
