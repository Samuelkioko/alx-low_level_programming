/*
 * File: 4-print_rev.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * print_rev - prints a stirg in inverse followed by a new line
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
	int a =0;

	while (s[a])
		a++;
	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
