#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  locates a given node of a linked list.
 * @head: pointer to the head of thelistint_t list.
 * @index: index of the node to locate starting from 0
 *
 * Return: NULL if node does not exist else the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
