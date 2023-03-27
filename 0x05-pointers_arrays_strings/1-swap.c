#include "main.h"

/**
 * swap_int - swap a and b
 *@a: parameter 1
 *@b: parameter 2
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
