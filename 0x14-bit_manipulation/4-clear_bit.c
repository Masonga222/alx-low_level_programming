#include "main.h"


/**
* clear_bit - sets the value of a bit to 0.
* at a given index.
* @n: pointer of an unsigned long int.
* @index: index of the bit wich you want to set starting from 0 .
* Return: 1 if it worked, -1 if it didn't.
* written by fulgence Nahimana
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int x;
if (index > 63)
return (-1);
x = 1 << index;
if (*n & x)
*n ^= x;
return (1);
}
