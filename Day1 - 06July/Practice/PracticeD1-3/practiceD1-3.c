// C Program Training
// Day 1(06-July) - Practice
// Program 3
// Prime number or not by taking the number as input from the user

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variable to store the number entered by the user
    int num, i, isPrime = 1;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Practice 3\n");
    printf("Title: Prime number or not by taking the number as input from the user\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    //Taking input for the number entered by the user
    printf("Enter Number : ");
    scanf("%d", &num);

    //Checking if the number is prime or not
    if (num <= 1) { //If the number is less than or equal to 1
        isPrime = 0; //It is not a prime number
    } else {
        for (i = 2; i <= num / 2; ++i) { //Loop from 2 to half of the number
            if (num % i == 0) { //If the number is divisible by any number in the loop
                isPrime = 0; //It is not a prime number
                break; //Exit the loop
            }
        }
    }

    //Printing whether the number is prime or not
    if (isPrime) {
        printf("%d is a Prime Number.\n", num); //It is a prime number
    } else {
        printf("%d is not a Prime Number.\n", num); //It is not a prime number
    }

    return 0; //indicating that the program has executed successfully
}