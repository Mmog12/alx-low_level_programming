husambe
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x17-doubly_linked_lists/4-free_dlistint.c
@husambe
husambe Create 4-free_dlistint.c
 1 contributor
22 lines (19 sloc)  312 Bytes
/*
 * File: 4-free_dlistint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
