#include "monty.h"

/**
 * pall - A unction that prints all
 *                  the elements of a dlistint_t list.
 * @h: Head of dlistint_t list.
 *
 * Return: The number of nodes.
 */

size_t pall(const stack_t *h)
{
	const stack_t *tmp = h;
	size_t count = 0;

	if (!h)
		return (0);

	while (tmp)
	{
		printf("%d\n", tmp->n);
		++count;
		tmp = tmp->next;
	}
	return (count);
}
