# Matrix Multiplication Program

This repository contains a C++ program that performs matrix multiplication. The program prompts the user for dimensions and then generates two matrices with random integer values to execute the multiplication.

## Prerequisites

Ensure you have a C++ compiler like GCC for Linux, MinGW for Windows, or Clang for macOS installed.

## Compilation

Use the provided `tasks.json` file to compile the program in Visual Studio Code with the `Ctrl+Shift+B` shortcut.

## Usage

Run the compiled executable in the terminal. Provide the dimensions for matrix A and matrix B as prompted. The program validates the matrix dimensions for multiplication feasibility, performs the multiplication if possible, and outputs the result along with the time taken to perform the operation.

## Example

```plaintext
Enter number of rows for matrix A: 3
Enter number of columns for matrix A: 2
Enter number of rows for matrix B: 2
Enter number of columns for matrix B: 4

Note: Matrix multiplication requires that the number of columns in the first matrix (matrix A) be equal to the number of rows in the second matrix (matrix B). You should input the dimensions such that the number of columns in matrix A equals the number of rows in matrix B. 
