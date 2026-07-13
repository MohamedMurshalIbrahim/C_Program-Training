// C Program Training
// Day 6 (13-July) - Session 3 (01.30PM to 03.00PM)
// Program 1
// Reverse a One-Dimensional Array

#include <stdio.h>

int main(){
    
    int arr[100], n, i, temp; //initializing variables
    
    //Print Program Details
    printf("C Program Training\n");
    printf("Day 6 - Session 3\n");
    printf("Title: Reverse a One-Dimensional Array\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("\nEnter the array elements:\n");
    for(i = 0; i < n; i++) {
        printf("Enter element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Display the Original Array
    printf("\nOriginal Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Reverse the array
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Display reversed array
    printf("\nReversed Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}