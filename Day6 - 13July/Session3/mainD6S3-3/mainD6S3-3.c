// mainD6S3-3.c

// C Program Training
// Day 6 (13-July) - Session 3 (01.00PM to 03.00PM)
// Program 3
// Find the Second Largest and Second Smallest Number in an array

#include <stdio.h>

int main() {

    int arr[100], n, i, j, temp;
    int secondSmallest = -1, secondLargest = -1;

    //Print program details
    printf("C Program Training\n");
    printf("Day 6 - Session 3\n");
    printf("Title: Find the Second Largest and Second Smallest Number using Sorting\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("\nEnter the array elements:\n");
    for(i = 0; i < n; i++) {
        printf("Enter element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Find second smallest using continue and break
    for(i = 1; i < n; i++) {
        if(arr[i] == arr[0])
            continue;

        secondSmallest = arr[i];
        break;
    }

    // Find second largest using continue and break
    for(i = n - 2; i >= 0; i--) {
        if(arr[i] == arr[n - 1])
            continue;

        secondLargest = arr[i];
        break;
    }

    // Display results
    if(secondSmallest == -1)
        printf("\n\nSecond Smallest Number does not exist.");
    else
        printf("\n\nSecond Smallest Number = %d", secondSmallest);

    if(secondLargest == -1)
        printf("\nSecond Largest Number does not exist.");
    else
        printf("\nSecond Largest Number = %d", secondLargest);

    return 0;
}