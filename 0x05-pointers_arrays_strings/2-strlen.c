/*
 * File: 2-strlen.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: The length
 */
int _strlen(char *s)
{
	int x = 0;
	while (s[x])
		x++;
	return (x);
}
