// C Program Training
// Day 3(08-July) - Assessment(Conducted on Day4(09-July) - (11.10AM to 12.50PM))
// Program 3
// Find the Minimum Window Substring Using the Sliding Window Technique

#include <stdio.h> // Header file for input and output functions
#include <string.h> // Header file for string manipulation functions
#include <limits.h> // Header file for INT_MAX

int main()
{
    printf("C Program Training\n");
    printf("Day 3 - Assessment\n");
    printf("Title: Find the Minimum Window Substring Using the Sliding Window Technique\n");
    printf("Welcome Mohamed Murshal Ibrahim!\n");

    // Input strings
    char s[] = "ADOBECODEBANC"; // The main string
    char t[] = "ABC"; // The target string

    int freq[256] = {0}; // Frequency array for characters in t
    int start = 0, minLength = INT_MAX, minStart = 0; // Variables to track the minimum window
    int count = 0; // Count of characters matched
    int i;

    //Store Frequency of characters in t
    for (i = 0; t[i] != '\0'; i++)
    {
        freq[(unsigned char)t[i]]++;
    }

    int tLen = strlen(t); // Length of the target string

    //Sliding Window Technique
    for (int end = 0; s[end] != '\0'; end++)
    {
        // If the character is part of t, decrease its frequency
        if (freq[(unsigned char)s[end]] > 0)
        {
            count++;
        }
        //Decrease frequency 
        freq[(unsigned char)s[end]]--; 

        // When all characters are matched, try to minimize the window
        while (count == tLen)
        {
            if (end - start + 1 < minLength)
            {
                minLength = end - start + 1;
                minStart = start;
            }

            // Move the start pointer to the right
            freq[(unsigned char)s[start]]++;
            if (freq[(unsigned char)s[start]] > 0)
            {
                count--;
            }
            start++;
        }
    }

    // Display the result
    if (minLength == INT_MAX)
    {
        printf("No valid window found.\n");
    }
    else
    {
        printf("Minimum Window Substring: ");
        for (i = minStart; i < minStart + minLength; i++)
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}