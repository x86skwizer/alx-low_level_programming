# 0x14-bit_manipulation

This repository contains the source code for the "0x14-bit_manipulation" project in the ALX program. The project focuses on the concept of bit manipulation in the C programming language.

## Table of Contents

- [Introduction](#introduction)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The "0x14-bit_manipulation" project is designed to enhance your understanding of bit manipulation and bitwise operations in C. It covers various operations such as setting, clearing, toggling, and checking bits in a number.

In this project, you will implement functions that allow you to perform these operations on unsigned integers using bitwise operators.

## Requirements

To run the code in this repository, you need to have the following requirements met:

- A C compiler (GCC recommended)
- The standard C library (libc)

## Installation

To install the "0x14-bit_manipulation" project, follow these steps:

1. Clone the repository to your local machine using the following command:

   ```
   git clone https://github.com/x86skwizer/0x14-bit_manipulation.git
   ```

2. Navigate to the project directory:

   ```
   cd 0x14-bit_manipulation
   ```

3. Compile the source code using your preferred C compiler:

   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o bit_manipulation
   ```

4. Run the executable:

   ```
   ./bit_manipulation
   ```

## Usage

The "0x14-bit_manipulation" project provides a set of functions that can be used to manipulate bits in unsigned integers. These functions are defined in the `bit_manipulation.h` header file and implemented in the corresponding `.c` files.

To use the functions in your own code, follow these steps:

1. Include the `bit_manipulation.h` header file in your source file:

   ```c
   #include "bit_manipulation.h"
   ```

2. Use the available functions to perform bit manipulation operations on unsigned integers.

   ```c
   unsigned int num = 42;
   unsigned int result = set_bit(num, 3);
   ```

3. Print or use the result as needed.

For more details on how to use each function, refer to the function prototypes and descriptions in the `bit_manipulation.h` header file.

## Contributing

Contributions to the "0x14-bit_manipulation" project are welcome. If you find any issues or would like to suggest improvements, please submit a pull request or open an issue on the repository.

When contributing, please ensure that your code follows the [ALX coding style](https://github.com/holbertonschool/Betty/wiki) and that you have thoroughly tested your changes.
