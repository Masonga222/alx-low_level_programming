#include "lists.h"
/**
 * dlistint_len -Function that will return number of elements in dll
 * @h: Pointer to struct of ddl
 * Return: The amount of elements in dll
 */
size_t dlistint_len(const dlistint_t *h)
{
        int count = 0;

        while (h != NULL)
        {
                h = h->next;
                count++;
        }
        return (count);
}
