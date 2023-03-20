#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine weather number is positive or negative or zero.
 *
 * Return: Always  0(success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
       if (n > 0) {
            printf("%d n is a positive number ", n);
       }else if (n == 0){
         printf("%d n is zero ", n);
       }else if (n < 0){
         printf("%d n is negative ", n);
         printf("\n");
       }
        
        return (0);
}
