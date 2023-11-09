#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - function that finds the biggest number
 * @un: username
 * @lu: length of username
 * Return: the biggest number
 */
int f4(char *un, int lu)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *un;
	vch = 0;

	while (vch < lu)
	{
		if (ch < un[vch])
			ch = un[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - function that multiplies each char of username
 * @un: username
 * @lu: length of username
 * Return: multiplied char
 */
int f5(char *un, int lu)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < lu)
	{
		ch = ch + un[vch] * un[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - that function generates a random char
 * @un: username
 * Return: a random char
 */
int f6(char *un)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *un)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - function that Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	ch = vch = 0;
	while (vch < len)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	/* ----------- f3 ----------- */
	ch = 1;
	vch = 0;
	while (vch < len)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
