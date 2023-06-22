#include "monty.h"

/**
 * f_pstr - function that displays the str starting at the top of the stack
 * @head: head of stack at the top
 * @counter: line counter
 * Return: Nothing
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
