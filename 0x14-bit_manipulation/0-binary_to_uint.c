#include "man.h"
/**
 * binary_to_uint - binary to uint
 * @b:string containing the binary number
 * Return: converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			index = (index << 1) | 1;
		else if (*b == '0')
			index <<= 1;
		else
			return (0);
		b++;
	}
	return (index);
}
