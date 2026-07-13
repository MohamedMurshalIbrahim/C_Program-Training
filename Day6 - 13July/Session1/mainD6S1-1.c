// C Program Training
// Day 6 (13-July) - Session 1(09.10AM to 10.50AM)
// Program 1
// Reading an input in the One-Dimensional Array from the user

#include <stdio.h> // Header file for input and output functions

int main(){

    int arr[100], n, i;

    //Print Program & User Details
    printf("C Program Training\n");
    printf("Day 6 - Session 1\n");
    printf("Title: Reading an input in the array from the user\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    //Input the size of the array
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    //Read array elements
    printf("Enter %d Elements: \n", n);
    for(i=0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Display array elements
    printf("\nThe array elements are: ");
    for(i=0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0; //Indicates that the program executed successfully.

}