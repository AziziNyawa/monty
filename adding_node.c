#include "monty.h"

/**
 * addnode - function that adds node to the head stack on the top
 * @head: head of the elements in the stack
 * @n: value to be added
 *
 * Return: Nothing
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
