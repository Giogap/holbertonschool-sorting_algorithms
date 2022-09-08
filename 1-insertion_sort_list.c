#include "sort.h"

/**
 * sortedInsert - check code
 * @list: double pointer de list
 * @newNode: node
 */

void sortedInsert(listint_t **list, listint_t *newNode)
{
	listint_t *current;

	if (*list == NULL)
	{
		*list = newNode;
	}
	else if ((*list)->n >= newNode->n)
	{
		newNode->next = *list;
		newNode->next->prev = newNode;
		*list = newNode;
	}
	else
	{
		current = *list;
		while (current->next != NULL && current->next->n < newNode->n)
			current = current->next;
		newNode->next = current->next;
		if (current->next != NULL)
		{
			newNode->next->prev = newNode;
		}
	current->next = newNode;
	newNode->prev = current;
	}
}
