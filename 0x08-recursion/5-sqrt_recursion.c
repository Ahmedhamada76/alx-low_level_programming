#include "main.h"
int funcion(int i, int b)
{
	int tmp = 0;

	if (i * i == b)
	{
		return (i);
	}
	else if (i * i < b)
	{
		tmp = funcion(i + 1, b);
	}
	else
	{
		return (-1);
	}
	return (tmp);
}
