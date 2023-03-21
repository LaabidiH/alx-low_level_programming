#include "main.h"

/**
 * _isalpha - print all alphabet in lowercase 10 time
 *@c: the character to be checked
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
