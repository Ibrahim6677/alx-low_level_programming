#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
* @head: pointer in first node
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}