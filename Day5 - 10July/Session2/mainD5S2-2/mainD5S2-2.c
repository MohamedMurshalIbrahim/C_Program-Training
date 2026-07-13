// C Program Training
// Day 5 (10-July) - Session 3(01.30PM to 03.00PM)
// Program 1
// Find the factorial of a given number using recursion

#include <stdio.h>

// Recursive function
long long factorial_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial_recursive(n - 1);
    }
}

int main()
{
    int num;
    long long factorial;

    printf("C Program Training\n");
    printf("Day 5 - Session 2\n");
    printf("Title: Find the factorial of a given number using recursion\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        factorial = factorial_recursive(num);
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}