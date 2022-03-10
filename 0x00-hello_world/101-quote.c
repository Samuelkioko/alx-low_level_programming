#include <stdio.h>
/**
 * write - To write the string 
 * filedes: File description
 * buf: This is the buffer
 * nbyte: This is the size of the string
 *
 * Description: The write function will write the provided string
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
