#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;
	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
	_putchar('_');	
	}
	}
	_putchar('\n');	  
}
