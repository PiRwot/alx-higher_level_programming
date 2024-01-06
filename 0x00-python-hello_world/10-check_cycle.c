#include "lists.h"

/**
 * check_cycle - checks if a linked linst contains a cycle
 * @list: linked list to check
 *
 * Return:0 when no cycle, 1 when positive
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = NULL, *slow = NULL;

	if (!list)
		return (0);
	fast = list->next;
	slow = list;

	while (fast && fast->next)
	{
		/* Loop would bring crush */
		if (fast == slow)
			return (1);
		fast = fast->next->next;
		slow = slow->next;
	}
	return (0);
}
