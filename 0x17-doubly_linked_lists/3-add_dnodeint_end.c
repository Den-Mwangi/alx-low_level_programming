#include"lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * @head: head node
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	while (temp && temp->next != NULL)
		temp = temp->next;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp;
	if (temp)
		temp->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
