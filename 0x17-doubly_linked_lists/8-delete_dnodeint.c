#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes nodes
 * @head: pointer
 * @index: index of node to be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
	unsigned int i;

	if (head == NULL)
	return (-1);
	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp = *head;
	i = 0;
	while (tmp != NULL)
	{
		if (i == index - 1)
	{
		tmp2 = tmp->next;
		tmp->next = tmp->next->next;
		if (tmp->next != NULL)
		tmp->next->prev = tmp;
		free(tmp2);
		return (1);
	}
	tmp = tmp->next;
	i++;
	}
	return (-1);

	return (1);
}
