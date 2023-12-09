#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list
 * @h : The Head of the list
 * Return: The numnber of items of the list
 */

 size_t print_dlistint(const dlistint_t *h)
 {
    size_t i;

    for (i = 0; h; i++)
    {
        printf("%d\n",h->n);
        h = h->next;
    }
    return (i);
 }

