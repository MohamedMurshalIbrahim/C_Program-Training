// C Program Training
// Day 3(08-July) - Assessment(Conducted on Day4(09-July) - (11.10AM to 12.50PM))
// Program 1
// Finding the Longest Non-Repeating Character Substring in C

#include <stdio.h> // Header file for input and output functions


// Function to find the length of the longest substring
// without repeating characters
int LongestSubstringLength(char s[])
{
    int lastIndex[256];  // Stores the last index of each ASCII character

    // Initialize all indices to -1
    for (int i = 0; i < 256; i++)
    {
        lastIndex[i] = -1;
    }

    int maxLength = 0;   // Stores the maximum substring length found
    int start = 0;       // Starting index of the current window

    // Traverse the string
    for (int end = 0; s[end] != '\0'; end++)
    {
        unsigned char ch = s[end];

        // If character is already in the current window,
        // move the start pointer
        if (lastIndex[ch] >= start)
        {
            start = lastIndex[ch] + 1;
        }

        // Update the last seen index of the character
        lastIndex[ch] = end;

        // Calculate the current window length
        int currentLength = end - start + 1;

        // Update the maximum length if needed
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main()
{
    printf("C Program Training\n");
    printf("Day 4 - Session 1\n");
    printf("Title: 2nd multiplication table from 1 to 20 using loop\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");
    
    // Input string
    char str[] = "abcdeabc";

    // Display the result
    printf("Length of Longest Substring: %d\n", LongestSubstringLength(str));

    return 0;
}