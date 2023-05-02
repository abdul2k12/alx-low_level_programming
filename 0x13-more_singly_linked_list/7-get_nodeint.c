#include "lists.h"

/**
 * Get node at index - to return the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index:  the index node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int i = 0;
        listint_t *temp = head;

        while (temp && i < index)
        {
                temp = temp->next;
                i++;
        }

        return (temp ? temp : NULL);
}
