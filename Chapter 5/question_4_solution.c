/**
 * C program to find nth Fibonacci term using recursion
 */

#include <stdio.h>


/* Function declaration */
int fibo(int num);


int main()
{
    int num;
    int fibonacci;
    
    /* Input a number from user */
    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d", &num);
    
    fibonacci = fibo(num); 
    
    printf("%d fibonacci term is %d", num, fibonacci);
    
    return 0;
}


/**
 * Recursive function to find nth Fibonacci term
 */
int fibo(int num) 
{
    if(num == 0)      //Base condition
        return 0;
    else if(num == 1) //Base condition
        return 1;
    else 
        return fibo(num-1) + fibo(num-2); 
}