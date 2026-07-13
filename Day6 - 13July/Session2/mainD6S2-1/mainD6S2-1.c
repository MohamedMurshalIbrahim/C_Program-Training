// C Program Training
// Day 6 (13-July) - Session 2(11.10AM to 12.50PM)
// Program 1
// Find the sum of One-Dimensional Array elements

#include <stdio.h> // Header file for input and output functions

int main(){

   int arr[100], n, i, sum = 0;

    //Print Program & User Information
    printf("C Program Training\n");
    printf("Day 6 - Session 2\n");
    printf("Title: Reading an input in the array from the user\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    //Input the size of the array
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    //Read array elements
    printf("Enter %d Elements: \n", n);
    for(i=0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // Calculate the sum of array elements
    }

    //Display the Sum
    printf("The sum of array elements is %d\n", sum);

    return 0; //Indicates that the program executed successfully.

}