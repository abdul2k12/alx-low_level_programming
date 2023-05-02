#include "lists.h"

/**
 * insert_nodeint_at_index - inserting new node in a linked list,
 * at given position
 * @head: pointer to first node in the list
 * @idx: the index where the new node is added
 * @n:  to insert data in the new node
 *
 * Return: NULL or pointer to the new node 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int i;
        listint_t *new;
        listint_t *temp = *head;

        new = malloc(sizeof(listint_t));
        if (!new || !head)
                return (NULL);

        new->n = n;
        new->next = NULL;

        if (idx == 0)
        {
                new->next = *head;
                *head = new;
                return (new);
        }

        for (i = 0; temp && i < idx; i++)
        {
                if (i == idx - 1)
                {
                        new->next = temp->next;
                        temp->next = new;
			 return (new);
                }
                else
                        temp = temp->next;
        }

        return (NULL);
}			
