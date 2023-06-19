# 0x0D-preprocessor

This repository contains the source code for the `0x0D-preprocessor` project in the ALX program. The project focuses on understanding and working with the C preprocessor.

## Description

The C preprocessor is a powerful tool that allows us to manipulate source code before it is compiled. It performs various tasks such as macro expansion, file inclusion, and conditional compilation. This project provides hands-on experience with the preprocessor directives and explores their functionalities.

## Project Structure

The project is organized as follows:


- `0-object_like_macro.h`: This is the main C file that demonstrates the usage of different preprocessor directives.

- `1-pi.h`: This C file defines a macro `PI` that expands to the value of pi.

- `2-main.c`: This C file demonstrates the usage of the `PRINT_SUM` macro, which prints the sum of two numbers.

- `3-function_like_macro.h`: This C file defines a function-like macro `ABS(x)` that computes the absolute value of a number.

- `4-sum.h`: This C file demonstrates the usage of the `SIZE` macro, which prints the size of a data type.

## Getting Started

To get started with the `0x0D-preprocessor` project, follow these steps:

1. Clone the repository:

   ```
   $ git clone https://github.com/x86skwizer/0x0D-preprocessor.git
   ```

2. Navigate to the project directory:

   ```
   $ cd 0x0D-preprocessor
   ```

3. Compile the source code:

   ```
   $ gcc -Wall -Werror -Wextra -pedantic *.c -o preprocessor
   ```

4. Run the executable:

   ```
   $ ./preprocessor
   ```

## Usage

The project provides several examples of using preprocessor directives. Each C file demonstrates a specific directive or macro definition. You can modify the source code or create your own files to explore different use cases.

To compile and run a specific C file, use the following command:

```
$ gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output_file>
$ ./<output_file>
```

## Resources

- [C Preprocessor](https://en.wikipedia.org/wiki/C_preprocessor): Wikipedia article providing an overview of the C preprocessor.

- [The C Preprocessor](https://gcc.gnu.org/onlinedocs/cpp/index.html): Official documentation for the GNU C preprocessor.

## Contributing

Contributions to the `0x0D-preprocessor` project are welcome. If you find any issues or have suggestions for improvements, please create a pull request or submit an issue in the repository.

