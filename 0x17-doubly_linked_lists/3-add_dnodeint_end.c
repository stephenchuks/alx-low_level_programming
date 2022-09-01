#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ptr, *last_ptr;

	new_ptr = malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
		return (NULL);

	new_ptr->n = n;
	new_ptr->next = NULL;

	if (*head == NULL)
	{
		new_ptr->prev = NULL;
		*head = new_ptr;
		return (new_ptr);
	}

	last_ptr = *head;
	while (last_ptr->next != NULL)
		last_ptr = last_ptr->next;
	last_ptr->next = new_ptr;
	new_ptr->prev = last_ptr;

	return (new_ptr);
}
