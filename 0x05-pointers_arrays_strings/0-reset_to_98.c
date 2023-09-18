#include "main.h"

/**
 * reset_to_98 - resets n to 98
 * @n: pointer to the value to e changed
 * Return: void
 */

void reset_to_98(int *n)
{
	int n = 402;
	int *p = &n;
	*p = 98;
}
