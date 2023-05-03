#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *had);
size_t print_listint_safe(const listint_t *had);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @had: A pointer to the had of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *had)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (had == NULL || had->next == NULL)
		return (0);

	tortoise = had->next;
	hare = (had->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = had;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @had: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *had)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(had);

	if (nodes == 0)
	{
		for (; had != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)had, had->n);
			had = had->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)had, had->n);
			had = had->next;
		}

		printf("-> [%p] %d\n", (void *)had, had->n);
	}

	return (nodes);
}

