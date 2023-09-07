# 0x1A-hash_tables

This repository contains the source code for the "0x1A-hash_tables" project in the ALX Low-Level Programming curriculum. The project focuses on the implementation and usage of hash tables in the C programming language.

## Table of Contents

- [Introduction](#introduction)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)

## Introduction

The "0x1A-hash_tables" project is designed to enhance your understanding of hash tables and their applications. A hash table is a data structure that allows for efficient storage and retrieval of key-value pairs. It uses a hash function to map keys to indices in an array, providing constant-time average case complexity for insertion, deletion, and retrieval operations.

In this project, you will implement functions to create, manipulate, and free hash tables. You will also implement functions to insert, retrieve, and delete key-value pairs in the hash table.

## Requirements

To run the code in this repository, you need to have the following requirements met:

- A C compiler (GCC recommended)
- The standard C library (libc)

## Installation

To install the "0x1A-hash_tables" project, follow these steps:

1. Clone the repository to your local machine using the following command:

   ```
   git clone https://github.com/x86skwizer/alx-low_level_programming.git
   ```

2. Navigate to the project directory:

   ```
   cd alx-low_level_programming/0x1A-hash_tables
   ```

3. Compile the source code using your preferred C compiler:

   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o hash_tables
   ```

4. Run the executable:

   ```
   ./hash_tables
   ```

## Usage

The "0x1A-hash_tables" project provides a set of functions that can be used to create and manipulate hash tables. These functions are defined in the `hash_tables.h` header file and implemented in the corresponding `.c` files.

To use the functions in your own code, follow these steps:

1. Include the `hash_tables.h` header file in your source file:

   ```c
   #include "hash_tables.h"
   ```

2. Create a new hash table using the `hash_table_create` function:

   ```c
   hash_table_t *ht = hash_table_create(1024);
   ```

3. Perform operations on the hash table using the available functions, such as `hash_table_set`, `hash_table_get`, `hash_table_delete`, etc.

4. Free the memory allocated for the hash table using the `hash_table_delete` function:

   ```c
   hash_table_delete(ht);
   ```
