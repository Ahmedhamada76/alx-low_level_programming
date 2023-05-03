#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **had)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*had)
	{
		next = (*had)->next;
		(*had)->next = prev;
		prev = *had;
		*had = next;
	}

	*had = prev;

	return (*had);
}

