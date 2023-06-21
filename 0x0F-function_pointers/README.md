# 0x0F-function_pointers

This repository contains the solutions for the "0x0F-function_pointers" project in the ALX School curriculum. The project focuses on the concept of function pointers in the C programming language.

## Description

The "0x0F-function_pointers" project explores the use of function pointers, which are variables that store the address of a function. Function pointers allow for dynamic function invocation, enabling the selection and execution of different functions at runtime.

The project includes various tasks that involve implementing functions that utilize function pointers. These tasks help to reinforce the understanding of function pointers and their practical applications.

## Project Structure

The project is organized into multiple files, each containing the implementation of specific functions. The main files in this repository are:

- `0-print_name.c`: Contains a function that takes a function pointer as a parameter and uses it to print a name.
- `1-array_iterator.c`: Implements a function that iterates over an array and applies a given function to each element.
- `2-int_index.c`: Defines a function that searches for an integer in an array using a function pointer to determine the comparison logic.
- `3-calc.h` and `3-op_functions.c`: Implements a calculator program that performs arithmetic operations based on function pointers.

## Getting Started

To get started with this project, follow these steps:

1. Clone this repository to your local machine using the following command:

   ```
   git clone https://github.com/your-username/0x0F-function_pointers.git
   ```

2. Navigate to the project directory:

   ```
   cd 0x0F-function_pointers
   ```

3. Compile the source files using a C compiler:

   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o function_pointers
   ```

4. Run the compiled program:

   ```
   ./function_pointers
   ```

## Usage

The functions implemented in this project can be used in various scenarios. Here are a few examples:

- The `print_name` function can be used to print a person's name by passing a function pointer to a printing function.
- The `array_iterator` function can be used to apply a specific operation to each element of an array by passing a function pointer to the desired operation.
- The `int_index` function can be used to search for a specific integer in an array by providing a function pointer that defines the comparison logic.

Feel free to explore the source code and experiment with different function pointers to understand their behavior and usage.

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please create a pull request or submit an issue on the repository.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
