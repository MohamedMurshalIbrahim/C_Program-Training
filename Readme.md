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

---

# C Programming Training - Day 1 (06-July) | Session 3 (01.30PM - 04.20PM)

## Overview
This session covers decision making (using `if-else`) and basic arithmetic/geometry using user inputs.
You will practice:
- Reading strings with spaces using `scanf()`.
- Taking multiple integer/float inputs.
- Using conditional logic to find eligibility and maximum values.
- Solving small problems like swapping numbers and area calculations.

## Learning Objectives
- Use `scanf(" %[^\\n]", name)` to read full names including spaces.
- Perform arithmetic operations (swap numbers, compute areas).
- Use `if` / `else if` / `else` for decision making.
- Use constants (like `PI`) for geometry formulas.

## Programs (Session 3)

### Program 1: Voting Eligibility Check (`mainD1S3-1.c`)
**Location:** `Day1 - 06July/Session3/mainD1S3-1/mainD1S3-1.c`

- Input:
  - Name (string)
  - Age (int)
- Practice:
  - Decision making using `if-else`
- Output:
  - Prints whether the person is eligible for voting (`age >= 18`).

### Program 2: Maximum of Three Numbers (`mainD1S3-2.c`)
**Location:** `Day1 - 06July/Session3/mainD1S3-2/mainD1S3-2.c`

- Input:
  - Name (string)
  - Number 1, Number 2, Number 3 (int)
- Practice:
  - Comparing using `if / else if / else`
- Output:
  - Prints the maximum number among the three.

### Program 3: Area of Circle, Rectangle, Square (`mainD1S3-3.c`)
**Location:** `Day1 - 06July/Session3/mainD1S3-3/mainD1S3-3.c`

- Input:
  - Name (string)
  - Radius (float)
  - Rectangle length & breadth (float)
  - Square side (float)
- Practice:
  - Using a constant `PI = 3.14`
  - Performing arithmetic calculations with `float`
- Output:
  - Prints:
    - Area of circle: `PI * r * r`
    - Area of rectangle: `length * breadth`
    - Area of square: `side * side`

### Program 4: Swap Two Numbers (Using Temporary Variable) (`mainD1S3-4.c`)
**Location:** `Day1 - 06July/Session3/mainD1S3-4/mainD1S3-4.c`

- Input:
  - Name (string)
  - Number 1, Number 2 (int)
- Practice:
  - Swapping using a temporary variable (`temp`).
- Output:
  - Prints Number 1 and Number 2 after swapping.

### Program 5: Swap Two Numbers (Without Temporary Variable) (`mainD1S3-5.c`)
**Location:** `Day1 - 06July/Session3/mainD1S3-5/mainD1S3-5.c`

- Input:
  - Name (string)
  - Number 1, Number 2 (int)
- Practice:
  - Swapping without `temp` using arithmetic:
    - `a = a + b`
    - `b = a - b`
    - `a = a - b`
- Output:
  - Prints the swapped values.

# Practice Programs (Day 1 - Practice)

### Practice 1: Leap Year Check (`practiceD1-1.c`)
**Location:** `Day1 - 06July/Practice/PracticeD1-1/practiceD1-1.c`

- Input: Year (int)
- Logic:
  - Leap year rules using nested `if` (`divisible by 4`, except `divisible by 100` unless also divisible by 400).
- Output:
  - Prints whether the given year is a leap year.

### Practice 2: Swap Two Numbers using XOR (`practiceD1-2.c`)
**Location:** `Day1 - 06July/Practice/PracticeD1-2/practiceD1-2.c`

- Input: Name (string), Number 1 (int), Number 2 (int)
- Logic:
  - Swap using XOR operator (`^`).
- Output:
  - Prints swapped numbers.

### Practice 3: Prime Number Check (`practiceD1-3.c`)
**Location:** `Day1 - 06July/Practice/PracticeD1-3/practiceD1-3.c`

- Input: Number (int)
- Logic:
  - Checks divisibility from `2` to `num/2` (sets `isPrime`).
- Output:
  - Prints whether the number is prime.

## How to Compile and Run (MinGW) - Generic
Go to the folder of the required program (example):
- `Day1 - 06July/Session3/mainD1S3-5/`

### 1) Compile
```bash
gcc mainD1S3-5.c -o main.exe
```

### 2) Run
```bash
main.exe
```

---

# C Programming Training - Day 2 (07-July) | Session 1 (09.10AM - 10.50AM)

## Overview
This session covers multi-level decision making using `if-else` to:
- Check whether the driver is eligible to apply for a driving licence.
- Validate licence type (two-wheeler / four-wheeler / load vehicle / lorry).
- Calculate traffic fines based on rule violations (helmet, seat belt, triples).

## Learning Objectives
- Use nested `if-else` statements to handle multiple conditions.
- Take multiple inputs using `scanf()`.
- Compute and accumulate a total fine based on violations.

## Program: `mainD2S1-1.c`
**Location:** `Day2 - 07July/Session1/mainD2S1-1/mainD2S1-1.c`

## What the Program Does
The program:
1. Takes input from the user:
   - Name (string)
   - Driver age (int)
   - Driving licence availability (1/0)
2. If eligible, it further checks:
   - Age eligibility for four-wheeler (`age >= 25`)
   - Badge licence for load vehicle
   - Heavy driving licence for lorry
3. Then verifies traffic rules:
   - Helmet not worn -> fine Rs. 200
   - Seat belt not worn -> fine Rs. 500
   - Triples riding -> fine Rs. 1000
4. Prints the total fine.

## Code Walkthrough (Key Logic)
- Age eligibility:
  - `if (age >= 18)`
- Driving licence type checks:
  - `if (licence == 1)` then
    - `if (age >= 25)` for four-wheeler
    - `badge == 1` for load vehicle
    - `heavyLicence == 1` for lorry
- Fine calculation:
  - Adds fixed amount to `fine` when a rule is violated.

## How to Compile and Run (MinGW)

### 1) Open the correct folder
- `Day2 - 07July/Session1/mainD2S1-1/`

### 2) Compile
```bash
gcc mainD2S1-1.c -o main.exe
```

### 3) Run
```bash
main.exe
```

## Expected Output
- Displays eligibility and licence permissions based on inputs.
- Displays individual fines for helmet/seat belt/triples (only if violated).
- Finally prints `Total Fine = Rs.<amount>`.

---

# C Programming Training - Day 2 (07-July) | Session 2 (11.10AM - 12.50PM)

## Overview
This session focuses on using loops (`for` and `while`) to generate sequences and filter numbers using `if` conditions.

You will practice:
- Printing the first N numbers using a `for` loop.
- Filtering even numbers using `if` inside a loop.
- Printing the first 100 numbers using a `while` loop.
- Filtering odd numbers from the generated sequence.

## Learning Objectives
- Use `for` loops for counting/fixed iteration.
- Use `while` loops for repeated execution with a condition.
- Use `if` conditions to print only required values (even/odd).

## Programs (Session 2)

### Program 1: Print First 11 Numbers & Even Numbers (`mainD2S2-1.c`)
**Location:** `Day2 - 07July/Session2/mainD2S2-1/mainD2S2-1.c`

- Practice:
  - Prints first 11 whole numbers (from `0` to `10`) using a `for` loop.
  - Prints only even numbers from the same range using `if (i % 2 == 0)`.

### Program 2: Print First 100 Numbers & Odd Numbers (`mainD2S2-2.c`)
**Location:** `Day2 - 07July/Session2/mainD2S2-2/mainD2S2-2.c`

- Practice:
  - Prints the first 100 numbers using a `while` loop.
  - Prints only odd numbers from `1` to `100` using `if (i % 2 != 0)`.

## How to Compile and Run (MinGW) - Generic
Go to the folder of the required program (example):
- `Day2 - 07July/Session2/mainD2S2-2/`

### 1) Compile
```bash
gcc mainD2S2-2.c -o main.exe
```

### 2) Run
```bash
main.exe
```




