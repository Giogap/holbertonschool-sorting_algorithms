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
}
