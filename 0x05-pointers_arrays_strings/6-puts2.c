/*
 * File: 6-puts2.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by a new line
 * @str: pointer
 * Return: Void
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
