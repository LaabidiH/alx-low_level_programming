#include <stdio.h>

/**
 * main -size of types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long int c;
printf("Size of a char: %d byte(s) \n", sizeof(char));
printf("Size of an int: %d byte(s) \n", sizeof(int));
printf("Size of a long int: %d byte(s) \n", sizeof(long int));
printf("Size of a long long int: %d byte(s) \n", sizeof(c));
printf("Size of a float: %d byte(s) \n", sizeof(float));
return (0);
}
