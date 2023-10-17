# C++ Switch Statement and Loops

This repository contains examples and explanations of the switch statement and loops in C++. The switch statement is used for selective execution of code blocks based on the value of an expression, while loops are used for repetitive execution of code blocks. This README provides an overview of how to use the switch statement and different types of loops in C++.

## Table of Contents
- [Switch Statement](#switch-statement)
  - [Syntax](#syntax)
  - [How It Works](#how-it-works)
  - [Example](#example)
- [Loops](#loops)
  - [while Loop](#while-loop)
  - [for Loop](#for-loop)
  - [do-while Loop](#do-while-loop)
- [Algorithm](#algorithm)
- [Output](#output)

## Switch Statement

### Syntax

The syntax of a switch statement in C++ is as follows:

```cpp
switch (expression) {
    case constant1:
        // Code to execute if expression == constant1
        break;
    case constant2:
        // Code to execute if expression == constant2
        break;
    // Add more cases as needed
    default:
        // Code to execute if expression does not match any case
}
```

### How It Works

- The switch statement evaluates the `expression` and compares it to the values of the `case` constants.
- If a match is found, the code block corresponding to that `case` is executed.
- The `break` statement is used to exit the switch statement. If omitted, code execution falls through to the next `case`, which may not be desirable.
- The `default` case is optional and is executed if none of the `case` constants match the `expression`.

### Example

```cpp
int day = 3;
switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    default:
        cout << "Unknown day";
}
```

## Loops

### while Loop

The `while` loop is used to repeatedly execute a block of code as long as a specified condition is true.

```cpp
while (condition) {
    // Code to execute while the condition is true
}
```

### for Loop

The `for` loop is used for iterating over a range of values for a specified number of times.

```cpp
for (initialization; condition; update) {
    // Code to execute for each iteration
}
```

### do-while Loop

The `do-while` loop is similar to the `while` loop but guarantees that the code block is executed at least once before checking the condition.

```cpp
do {
    // Code to execute at least once
} while (condition);
```

 ## **ALGORITHM**

 - **Calculator program using Switch-Case**

Calculator Program Algorithm using Switch-Case:

1.Start

2.Declare variables for two operands (e.g., num1 and num2), a character variable (e.g., operation) to store the selected operation, and a variable for the result (e.g., result).

3.Prompt the user to enter the first operand (num1).

4.Prompt the user to select an operation (e.g., '+', '-', '*', or '/') and store it in the operation variable.

5.Prompt the user to enter the second operand (num2).

6.Use a switch-case statement to perform the selected operation:

7.Evaluate the value of operation:

If operation is '+', add num1 and num2 and store the result in result.

If operation is '-', subtract num2 from num1 and store the result in result.

If operation is '*', multiply num1 and num2 and store the result in result.

If operation is '/', divide num1 by num2 and store the result in result.

8.Display the result to the user.

9.End

- **Display Days of the Week Algorithm**:

1.Start

2.Declare a variable (e.g., dayNumber) to store the user's input for the day number.

3.Prompt the user to enter a number between 1 and 7.

4.Read and store the user's input in the dayNumber variable.

5.Use a switch-case statement to display the corresponding day of the week based on dayNumber:

6.For each case (1 to 7), display the name of the corresponding day.

7.Include a default case to handle inputs outside the range 1-7 and display "Wrong input."

8.End

- **Print 50 Numbers using While Loop Algorithm**:

1.Start

2.Declare an integer variable (e.g., num) and initialize it to 1 (the starting number).

3.Create a while loop that continues while num is less than or equal to 50:

4.Inside the loop:

5.Print the current value of num.

6.Increment num by 1.

7.End


- **Print "Hello, World!" 10 Times using For Loop Algorithm**:

1.Start

2.Create a for loop that iterates from 1 to 10 (inclusive):

3.Initialize a loop variable (e.g., i) to 1.

4.Continue the loop as long as i is less than or equal to 10.

5.In each iteration of the loop:

6.Print "Hello, World!" to the output.

7.End

- **Print Number Triangle using For Loop Algorithm**:

1.Start

2.Declare a variable (e.g., n) to store the number of rows in the triangle pattern.

3.Prompt the user to enter the number of rows (n).

4.Create a for loop that iterates from 1 to n to represent each row:

5.Initialize a loop variable (e.g., row) to 1.

6.Continue the outer loop as long as row is less than or equal to n.

7.Inside the outer for loop, create a nested for loop to print the numbers in each row:

8.Initialize a loop variable (e.g., num) to 1.

9.Continue the inner loop as long as num is less than or equal to row.

10.Inside the inner for loop, print the value of num followed by a space.

11.After the inner for loop completes, print a newline character to move to the next row.

12.End of the inner loop.

13.After the outer for loop completes, you will have printed the number triangle pattern.

14.End

## **OUTPUT**



 - **Calculator program using Switch-Case**

![exp6_1](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/fe74da31-47c4-4353-af35-49266e79fdaa)


- **Display Days of the Week Algorithm**:

![exp6_2](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/b69c3525-52f0-4cd3-9fe3-dafb556967f8)


- **Print 50 Numbers using While Loop Algorithm**:
  
![exp6_3](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/8e989f6b-49d0-4c2f-971a-d82cfc09b9cc)
![exp6_4](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/9306d551-f3fb-4d54-b7e1-3c599dc44e6e)


- **Print "Hello, World!" 10 Times using For Loop Algorithm**:

  ![exp6_5](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/36099ccb-8e7a-4dbf-ab51-c23037b0e2f3)

  - **Print Number Triangle using For Loop Algorithm**:

    
![exp6_6](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/e27fb7ab-7b8e-4a1c-a5f7-fa555239d599)
