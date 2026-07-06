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

