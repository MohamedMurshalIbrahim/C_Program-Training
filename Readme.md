# C Programming Training - Day 1 (06-July) | Session 1 (9.10AM - 10.50AM)

## Overview
This session covers the basics of C programming using a simple introductory program that prints personal details.

## Learning Objectives
- Understand the structure of a C program (`#include`, `main`, `return 0`).
- Use `printf()` to display output in the console.
- Practice formatted output using escape sequences like `\n`.

## Program: `main.c`
**Location:** `Day1 - 06July/Session1/main.c`

The program prints the following details:
- Name
- ID
- Course
- Year
- College

## Code Walkthrough
- `#include <stdio.h>`
  - Enables `printf()` for console output.
- `int main()`
  - Entry point of the C program.
- `printf("...")`
  - Prints text to the console.
- `return 0;`
  - Indicates successful program execution.

## How to Compile and Run (MinGW)

### 1) Open the correct folder
Go to the folder containing `main.c` (for example):
- `Day1 - 06July/Session1/`

### 2) Compile
Using GCC from MinGW:
```bash
gcc main.c -o main.exe
```

### 3) Run
```bash
main.exe
```


## Expected Output
The program will display the user details in the console, each on a new line.

---

# C Programming Training - Day 1 (06-July) | Session 2 (11.10AM - 12.50PM)

## Overview
This session covers input and formatted output in C. You will take details (Name, Age, Date of Birth, and Address) from the user using `scanf()` and print them in a proper format using `printf()`.

## Learning Objectives
- Use `scanf()` for different data types (`int`, `char[]`).
- Read multi-word strings (for example, full name) safely.
- Print the entered information in a formatted layout.
- Practice using escape sequences like `\n`.

## Program: `mainD1S2-2.c`
**Location:** `Day1 - 06July/Session2/mainD1S2-2/mainD1S2-2.c`

## What the Program Does
The program:
1. Displays title and welcome message.
2. Takes the following inputs from the user:
   - Name (string)
   - Age (integer)
   - Date of Birth (string)
   - Address (string)
3. Prints all entered values in a structured format.

## Code Walkthrough
- `#include <stdio.h>`
  - Provides `printf()` and `scanf()`.
- Character arrays:
  - `char name[100];`
  - `char dob[20];`
  - `char address[200];`
- `scanf(" %[^"]", name);`
  - Reads the full name including spaces (until newline).
- `scanf("%d", &age);`
  - Reads integer age.
- `scanf("%s", dob);` and `scanf("%s", address);`
  - Reads DOB and address as single tokens.
- `printf("... %s ... %d ...")`
  - Prints data in aligned/structured form.
- `return 0;`
  - Indicates successful execution.

## How to Compile and Run (MinGW)

### 1) Open the correct folder
Go to the folder containing `mainD1S2-2.c`:
- `Day1 - 06July/Session2/mainD1S2-2/`

### 2) Compile
```bash
gcc mainD1S2-2.c -o main.exe
```

### 3) Run
```bash
main.exe
```

## Expected Output
- The program will prompt the user for Name, Age, Date of Birth, and Address.
- After input, it will display the same information in a formatted block like:
  - Name
  - Age
  - Date of Birth
  - Address

