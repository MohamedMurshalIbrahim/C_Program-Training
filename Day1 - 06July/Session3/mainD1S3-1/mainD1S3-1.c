// C Program Training
// Day 1(06-July) - Session 3(01.30PM to 03.00PM)
// Program 1
// Checking whether the eligibility of the person for voting based on the age entered by the user

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variable to store name & age of the person
    char name[100];
    int age;

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Session 3\n");
    printf("Title: Checking whether the eligibility of the person for voting based on the age entered by the user\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    //Taing input for the name of the person
    printf("Enter Name : ");
    scanf(" %[^\n]", name);

    //Taking input for the age of the person
    printf("Enter Age : ");
    scanf("%d", &age);

    //Checking whether the person is eligible for voting based on the age entered by the user
    if (age >= 18) {
        printf("You are eligible for voting.\n");
    } else {
        printf("You are not eligible for voting.\n");
    }

    return 0; //indicating that the program has executed successfully
}