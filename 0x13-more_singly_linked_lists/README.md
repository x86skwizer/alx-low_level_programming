# 0x13-more_singly_linked_lists

This repository contains the source code for the "0x13-more_singly_linked_lists" project in program. The project focuses on further exploring the concepts of singly linked lists in C programming.

## Table of Contents

- [Introduction](#introduction)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license## Introduction

The "013-more_singly_linked_lists" project is designed to deepen your understanding linked lists and their operations. It upon the concepts covered in the previous "0x12-singly_linked_lists" project.

In this project, you will functions that allow you to manipulate singly linked lists, such as inserting nodes at specific positions, deleting nodes, and printing the list in reverse order.

## Requirements

To run the code in this repository, you need to have the following requirements met:

- A C compiler (GCC recommended)
- The standard C library (libc)

## Installation

To install the "x13-more_singly_linked_lists" project follow these steps1. Clone the repository to your local machine using the following command:

   ```
   git clone https://github.com/x86skwizer/0x13-more_singly_linked_lists.git
   ```

. Navigate to the project:

   ```
 cd013-more_singly_linked_lists
   ```

3. Compile the source code using your preferred C compiler:

   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o linked_lists
   ```

4. Run the executable:

   ```
   ./linked_lists
   ```

## Usage

The "0x13-more_singly_linked_lists" project provides a set of functions that can be used to manipulate singly linked These functions are defined in the `.h` header file and implemented in the corresponding `.c` files.

To use the functions in your own code, follow these steps:

1. Include the `lists.h` header file in your source file:

   ```c
   #include "lists.h"
   ```

2. Create a new singly linked list using `add_nodeint` function:

   ```c
   listint_t *list = NULL;
   list = add_nodeint(&list, 42);
   ```

3. Perform operations on the linked list using the available functions, such as `print_listint`, `insert_nodeint_at_index`, `delete_nodeint_at_index`, etc.

4. Free the memory allocated for the linked list using the `free_list` function:

   ```c
   free_listint(list);
   ```

For more details on how to use each function, refer to the function and descriptions in the `lists.h` header file.

## Contributing

Contributions to the "0x13-more_singly_linked_lists" project are welcome. If you find any issues or would like to suggest improvements, please a pull request or submit an issue on the repository.

When contributing, please ensure that your code follows the [ALX coding style](https://github.com/holbertonschool/Betty/wiki) and that you have thoroughly tested your changes.
