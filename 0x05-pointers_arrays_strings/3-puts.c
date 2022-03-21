/*
 * File: 3-puts.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
