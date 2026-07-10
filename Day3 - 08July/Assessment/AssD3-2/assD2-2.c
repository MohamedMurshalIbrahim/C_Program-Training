// C Program Training
// Day 3(08-July) - Assessment
// Program 2
// Product of Array Except Self

#include <stdio.h> // Header file for input and output functions

int main() {
    int arr[] = {1, 2, 3, 4}; // Input array
    int n = 4; // Size of the array;
    int left[4], right[4], result[4];

    printf("C Program Training\n");
    printf("Day 3 - Assessment\n");
    printf("Title: Product of Array Except Self\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Initialize left and right arrays
    
    // Left product array
    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * arr[i - 1];
    }

    // Right product array

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * arr[i + 1];
    }

    //Multiply left and right arrays products
    for (int i = 0; i < n; i++) {
        result[i] = left[i] * right[i];
    }

    // Display the result
    printf("Product of array except self: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}