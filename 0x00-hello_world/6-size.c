#include<stdio.h>
/**
 *main - the start point
 *Description:print each size of each type of the variables in c
 *Return:return 0
 */
int main(void)
{
printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s) \n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(long int));
printf("Size of a clong long int: %lu byte(s) \n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(float));
return (0);
}
