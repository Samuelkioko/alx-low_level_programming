/*
 * File: 8-print_array.c
 * Auth: Samuel Kioko
 */
#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integer
 * followed by a new line
 * @a: int type array pointer
 * @n: int type integer
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
