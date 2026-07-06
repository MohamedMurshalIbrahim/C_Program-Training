// C Program Training
// Day 1(06-July) - Session 2(11.10AM to 12.50PM)
// Program 2
// Getting Name, Age, Date of Birth, and Address of the Person from the User and Printing it in a Proper Format

#include <stdio.h> //Header file for input and output functions

int main() { //Main function where the execution of the program begins

    //Initializing variables to store name, age, date of birth, and address of the person
    char name[100];
    int age;
    char dob[20];
    char address[200];

    //Title and session information for the program
    printf("C Program Training\n");
    printf("Day 1 - Session 2\n");
    printf("Title: Getting Name, Age, Date of Birth, and Address of the Person from the User and Printing it in a Proper Format\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    //Taking input for the name of the person
    printf("Enter Name : ");
    scanf(" %[^\n]", name);

    //Taking input for the age of the person
    printf("Enter Age : ");
    scanf("%d", &age);

    //Taking input for the date of birth of the person
    printf("Enter Date of Birth : ");
    scanf("%s", dob);

    //Taking input for the address of the person
    printf("Enter Address : ");
    scanf("%s", address);

    //Printing the information in a proper format
    printf("\nInformation Entered by the User:\n");
    printf("Name            : %s\n", name);
    printf("Age             : %d\n", age);
    printf("Date of Birth   : %s\n", dob);
    printf("Address         : %s\n", address);

    return 0; //indicating that the program has executed successfully
}