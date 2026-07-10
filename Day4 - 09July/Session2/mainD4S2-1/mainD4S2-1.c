// C Program Training
// Day 4 (09-July) - Session 2(01.30PM to 03.00PM)
// Program 1
// Draw a 5 * 5 outline square using asterisks

#include <stdio.h> // Header file for input and output functions

int main() {

    int i, j;

    printf("C Program Training\n");
    printf("Day 4 - Session 2\n");
    printf("Title: Draw a 5 * 5 square using asterisks\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Loop to print the square
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}