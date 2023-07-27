# 0x15-file_io

This repository contains the source code for the "0x15-file_io" project, which is part of the ALX Low-Level Programming curriculum. The project focuses on file input/output operations in the C programming language.

## Description

The "0x15-file_io" project introduces various file input/output operations and demonstrates their usage through a series of tasks. These tasks cover concepts such as opening, reading, writing, and closing files, as well as error handling and manipulation of file permissions.

The project consists of the following files:

- `main.h`: Header file containing function prototypes and necessary libraries.
- `0-read_textfile.c`: C file that reads a text file and prints its contents to the standard output.
- `1-create_file.c`: C file that creates a file and writes a given text content to it.
- `2-append_text_to_file.c`: C file that appends text to the end of a file.
- `3-cp.c`: C file that copies the content of one file to another file.
- `100-elf_header.c`: C file that displays the information contained in the ELF header of an ELF file.

## Requirements

- The code is written in C and follows the C90 standard.
- The code is compiled using `gcc` with the flags `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`.
- The code does not use global variables.
- The code passes all the checks from the `betty-style` and `betty-doc` linters.

## Usage

To compile the code, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o <output_file>
```

Replace `<output_file>` with the desired name for the output file.

To run the compiled program, use the following command:

```
./<output_file>
```

Replace `<output_file>` with the name of the compiled output file.

## Examples

Here are a few examples of how to use the programs included in this project:

- To read and print the contents of a text file:

  ```
  ./0-read_textfile file.txt
  ```

- To create a new file and write text content to it:

  ```
  ./1-create_file new_file.txt "This is the content of the new file."
  ```

- To append text to the end of an existing file:

  ```
  ./2-append_text_to_file existing_file.txt "This text will be appended."
  ```

- To copy the content of one file to another:

  ```
  ./3-cp file1.txt file2.txt
  ```

- To display the information contained in the ELF header of an ELF file:

  ```
  ./100-elf_header elf_file
  ```

## Authors

This project was developed by [ALX](https://www.alxafrica.com/) students in collaboration with their mentors.
