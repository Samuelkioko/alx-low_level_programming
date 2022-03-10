#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char buf[] = "and that piece of art is useful" - Dora Korpar, 2015-10-19\n";
	write(1,buf,strlen(buf));
	return (1);
}
