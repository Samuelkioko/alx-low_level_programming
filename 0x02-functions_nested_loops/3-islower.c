/*
 * File: 3-islower.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * _islower - checks for lowercase character.
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
