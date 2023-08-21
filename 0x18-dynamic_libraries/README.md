# 0x18-dynamic_libraries

Welcome to the `0x18-dynamic_libraries` repository in the ALX Low-Level Programming track! This repository contains C code examples and exercises related to dynamic libraries.

## Table of Contents

- [Description](#description)
- [Installation](#installation)
- [Usage](#usage)

## Description

The `0x18-dynamic_libraries` repository focuses on dynamic libraries in C. It covers topics such as creating, compiling, and using dynamic libraries. Each topic includes code examples and exercises to help you understand and practice working with dynamic libraries.

## Installation

To use the code in this repository, you need to have a C compiler installed on your machine. You can use GCC or any other C compiler of your choice.

Once you have a C compiler installed, you can clone this repository using the following command:

```bash
git clone https://github.com/x86skwizer/alx-low_level_programming/0x18-dynamic_libraries.git
```

## Usage

After cloning the repository, navigate to the project directory:

```bash
cd 0x18-dynamic_libraries
```

Inside the directory, you will find C files with code examples and exercises related to dynamic libraries.

To compile a C file that uses a dynamic library, you can use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -shared -o libname.so filename.c
```

Replace `libname.so` with the desired name for your dynamic library and `filename.c` with the name of the C file you want to compile.

To use a dynamic library in your C program, you can include the library using the `#include` directive and link it during compilation using the `-L` and `-l` flags. For example:

```c
#include "header.h"

int main(void) {
    // Your code here
    return 0;
}
```

```bash
gcc -Wall -Werror -Wextra -pedantic -o executable_name filename.c -L. -lname
```

Replace `header.h` with the name of the header file associated with your dynamic library, `executable_name` with the desired name for your executable, `filename.c` with the name of the C file you want to compile, `libname.so` with the name of your dynamic library, and `lname` with the name of your dynamic library without the `lib` prefix and `.so` extension.
