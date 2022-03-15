/*
 * File: 4-isalpha.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: character to be checked
 *
 * Return: Returns 1 if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
