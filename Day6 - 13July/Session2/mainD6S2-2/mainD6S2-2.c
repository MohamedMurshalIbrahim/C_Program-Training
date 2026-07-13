// C Program Training
// Day 6 (13-July) - Session 2(11.10AM to 12.50PM)
// Program 2
// Reading an input in the Two-Dimensional array from the user

#include <stdio.h> // Header file for input and output functions

int main() {

    int arr[10][10], rows, cols, i, j;

    // Print program details
    printf("C Program Training\n");
    printf("Day 6 - Session 2\n");
    printf("Title: Read elements into a Two-Dimensional array\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Input the number of rows and columns
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Read array elements
    printf("\nEnter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display array elements
    printf("\nThe Two-Dimensional array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}