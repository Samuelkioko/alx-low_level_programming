/*
 * File: 7-puts_half.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * puts_half - prints half of string,
 * followed by a new line
 * @str: pointer
 * Return: Void
 */
void puts_half(char *str)
{
	int len = 0;
	int i = (len + 1) / 2;

	while (str[len] != '\0')
		len++;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
