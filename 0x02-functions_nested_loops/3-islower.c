#include "main.h"

/**
  * _islower -looks for lowercase character
  *@c: parameter
  *
  * Return: 1 for lowercase character or 0 for anything else
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
