# 0x09. C - Static libraries

This repository contains the source code for the tasks of the "0x09. C - Static libraries" project at Holberton School.

## Description

The project is focused on learning about static libraries in C programming language. Static libraries are collections of object files that are linked with the program at compile time. They are used to speed up the compilation process and to share code between different programs.

## Requirements

* Ubuntu 20.04 LTS
* GCC 9.3.0

## Installation

To use this project, follow these steps:

### Step 1: Clone the repository

Clone the repository using the following command:

```
git clone https://github.com/x86skwizer/alx-low_level_programming.git
```

### Step 2: Navigate to the project directory

Navigate to the project directory:

```
cd alx-low_level_programming/0x09-static_libraries
```

### Step 3: Compile the static library

Compile the static library using the following command:

```
gcc -c *.c
ar -rc lib<name>.a *.o
```

### Step 4: Use the static library in your program

Use the static library in your program by including the header file and linking the library:

```
gcc -o <program> <program>.c -L. -l<name>
```

## Tasks

The project is divided into the following tasks:

### Task 0: A library is not a luxury but one of the necessities of life

Create a static library called `libmy.a` containing the following functions:

* `_putchar`
* `_islower`
* `_isalpha`
* `_abs`
* `_puts`
* `_strlen`
* `_strcpy`
* `_atoi`
* `_strcat`
* `_strncat`
* `_ncpy`
* `_strcmp`
* `_memset`
* `_memcpy`
* `_strchr`
* `_strspn`
* `_strpbrk`
* `_strstr`

### Task 1: Without libraries what have we? We have no past and no future

Write a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files in the current directory.

## Files

The repository contains the following files:

### libmy.a

A static library containing the functions listed in Task 0.

### create_static_lib.sh

A shell script that creates a static library called `liball.a` from all the `.c` files in the current directory.

### holberton.h

A header file containing the prototypes of all the functions in `libmy.a`.

### *.c

Several C files containing the implementations of the functions in `libmy.a`.
