# cpp_simple_cal
# A Basic Calculator Using C++
C++ program is a basic calculator that allows users to perform addition, subtraction, multiplication, or division on two numbers.
This C++ program is a simple calculator that allows users to perform basic arithmetic operations (addition, subtraction, multiplication, and division) on two numbers. Here's how the program works:

# 1. Variable Declaration:
double num1, num2;: These variables are used to store the two numbers input by the user.
char operation;: This variable is used to store the arithmetic operation entered by the user.
# 2. User Input:
The program prompts the user to enter the first number (num1), the second number (num2), and the desired operation (operation).
The user inputs are collected using std::cin.
# 3. Switch Statement:
The program uses a switch statement to evaluate the operation selected by the user.
Depending on the value of operation, the program performs the corresponding arithmetic operation:
* +: Adds num1 and num2.
* -: Subtracts num2 from num1.
* *: Multiplies num1 and num2.
* /: Divides num1 by num2, but first checks if num2 is not zero to avoid division by zero.
If the user enters a different character that is not recognized as an operation, the program prints an "Invalid operation" message.
# 4. Output:
The result of the selected operation is displayed to the user.
If the user tries to divide by zero, the program outputs an error message instead of performing the operation.
# 5. Program Termination:
The program returns 0, indicating successful execution.
This program demonstrates basic input/output handling, conditional statements (using a switch), and error checking in C++.
