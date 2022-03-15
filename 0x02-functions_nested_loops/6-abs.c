/*
 * File: 6-abs.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to be computed
 *
 * Return: Returns n if n>=0, else -n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);

}
