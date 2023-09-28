#include "main.h"

/**
* get_bit - function that returns the value of a bit at a given index
* @n: number to search
* @index: index of the bit
* main - check the code
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int vari;
if (index > 63)
return (-1);
vari= (n >> index) & 1;
return (vari);
}
