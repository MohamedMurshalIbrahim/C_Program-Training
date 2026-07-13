// mainD6S3-2.c

// C Program Training
// Day 6 (13-July) - Session 3 (01.30PM to 03.00PM)
// Program 2
// Display memory address of an array elements

#include <stdio.h>

int main(){
    
    int arr[5] = {10, 20, 30, 40, 50}; //initializing variables
    
    //Print Program Details
    printf("C Program Training\n");
    printf("Day 6 - Session 3\n");
    printf("Title: Display memory address of an array element\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");
    
    printf("\n");
    
    // Display the memory address
    for (int i = 0; i < 5; i++){
        printf("Value = %d Address = %p\n", arr[i], (void *) & arr[i]);
    }
    
    return 0;
}