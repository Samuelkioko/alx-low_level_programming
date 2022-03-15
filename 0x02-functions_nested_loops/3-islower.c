/*
 * File: 3-islower.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: Return 1 if case is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
