#include <stdio.h>
#include "lists.h"

/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * @head: Double pointer to the head of the list
 * Return: 1 if the list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *prev = NULL;
	listint_t *second_half = *head;
	listint_t *midnode = NULL;
	int result = 1;

	if (*head == NULL || (*head)->next == NULL)
		return (result);

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		prev = slow;
		slow = slow->next;
	}

	if (fast != NULL)
	{
		midnode = slow;
		slow = slow->next;
	}

	second_half = slow;
	prev->next = NULL;
	reverse_list(&second_half);
	result = compare_lists(*head, second_half);

	if (midnode != NULL)
	{
		prev->next = midnode;
		midnode->next = second_half;
	}
	else
		prev->next = second_half;

	return (result);
}

/**
 * reverse_list - Reverses a linked list
 * @head_ref: Double pointer to the head of the list
 */
void reverse_list(listint_t **head_ref)
{
	listint_t *prev = NULL;
	listint_t *current = *head_ref;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head_ref = prev;
}

/**
 * compare_lists - Compares two linked lists
 * @head1: Pointer to the head of the first list
 * @head2: Pointer to the head of the second list
 * Return: 1 if the lists are equal, 0 otherwise
 */
int compare_lists(listint_t *head1, listint_t *head2)
{
	listint_t *temp1 = head1;
	listint_t *temp2 = head2;

	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1->n == temp2->n)
		{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
			return (0);
	}

	if (temp1 == NULL && temp2 == NULL)
		return (1);

	return (0);
}
