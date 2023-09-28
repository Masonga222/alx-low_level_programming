#include "main.h"


/**
* get_endianness - This function checks the endianness
* Return: 0 for big , 1 for little
* Whritten by Fulgence Nahimana
*/
int get_endianness(void)
{
unsigned int Myvar;
char *y;
Myvar = 1;
y = (char *) &Myvar;
return ((int)*y);
}
