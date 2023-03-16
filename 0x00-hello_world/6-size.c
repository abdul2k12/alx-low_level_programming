#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("         char is %2d bytes \n", sizeof(char));
	printf("          int is %2d bytes \n", sizeof(int));
	printf("     long int is %2d bytes \n", sizeof(long int));
	printf("        float is %2d bytes \n", sizeof(float));
	printf("       double is %2d bytes \n", sizeof(double));
    return (0);
}
