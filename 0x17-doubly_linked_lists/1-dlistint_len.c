#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: The head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp = h;



	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);

}
