#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Num of arguments
 * @argv: Array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}
if (!get_op_func(argv[2]) || argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
return (100);
}
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
return (0);
}
