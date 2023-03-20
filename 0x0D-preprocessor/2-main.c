#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}




======================================

3-function_like_macro.h CODE


#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < (0) ? -(x) : (x))

#endif
