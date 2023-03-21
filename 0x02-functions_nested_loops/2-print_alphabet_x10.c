#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print all alphabet in lowercase 10 time
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
}
