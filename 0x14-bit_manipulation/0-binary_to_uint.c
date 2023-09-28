#include "main.h"


/**
* binary_to_uint - The function  converts a binary number to an unsigned int
* @b: pointing a string of the binary number(0&1)
* Return: the converted number
* whritten by (Fulgence nahimana)
*/
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int var = 0;
if (!b)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
var = 2 * var + (b[x] - '0');
}
return (var);
}
