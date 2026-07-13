// C Program Training
// Day 6 (13-July) - Session 2 (11.10AM to 12.50PM)
// Program 3
// Display and find the sum of Two-Dimensional array using two arrays

#include <stdio.h> // Header file for input and output functions

int main() {

    int arr1[10][10], arr2[10][10], sum[10][10];
    int rows, cols, i, j;

    printf("C Program Training\n");
    printf("Day 5 - Session 2\n");
    printf("Title: Sum of Two-Dimensional Arrays\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Read first matrix
    printf("\nEnter the elements of the First Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Read second matrix
    printf("\nEnter the elements of the Second Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Add the matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display first matrix
    printf("\nMatrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nMatrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    // Display sum matrix
    printf("\nSum Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}