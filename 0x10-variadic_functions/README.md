# 0x10-variadic_functions

This repository contains the solutions for the tasks in the `0x10-variadic_functions` project at ALX. The project focuses on variadic functions in the C programming language.

## Files

The following files are included in this repository:

1. `0-sum_them_all.c`: This file contains a function `sum_them_all` that takes a variable number of arguments and returns the sum of all the arguments.
2. `1-print_numbers.c`: This file contains a function `print_numbers` that takes a separator string and a number of integers as arguments, and prints the integers separated by the separator string.
3. `2-print_strings.c`: This file contains a function `print_strings` that takes a separator string and a number of strings as arguments, and prints the strings separated by the separator string.
4. `3-print_all.c`: This file contains a function `print_all` that takes a format string and a variable number of arguments, and prints the arguments based on the format string.

## Usage

To use the functions in this repository, follow these steps:

1. Clone the repository to your local machine.
2. Include the necessary header files in your C program.
3. Call the desired function with the appropriate arguments.

For example, to use the `sum_them_all` function:

```c
#include "variadic_functions.h"

int main(void)
{
    int sum = sum_them_all(4, 1, 2, 3, 4);
    printf("Sum: %d\n", sum);
    return 0;
}
```

## Compilation

To compile the files in this repository, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o <output_file>
```

Replace `<output_file>` with the desired name of the output file.

## Requirements

The code in this repository is written in C and complies with the C90 standard. It has been tested on Ubuntu 20.04 using gcc version 9.3.0.

## Author

This repository is maintained by [ALX](https://github.com/alx).
