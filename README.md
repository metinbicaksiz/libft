# README for libft

## 📘 Introduction

**libft** is a custom implementation of the standard C library functions. It is a core project in the curriculum of the 42 programming school, where students are tasked with recreating a variety of standard library functions from scratch. This project serves as a foundational exercise to familiarize students with C programming, memory management, and basic data structures.

## ✨ Features

The **libft** library includes a wide range of functions that are commonly used in C programming. These functions can be categorized as follows:

### Memory Management
- `ft_memset`: Fills a block of memory with a specific value.
- `ft_bzero`: Sets a block of memory to zero.
- `ft_memcpy`: Copies a block of memory from one location to another.
- `ft_memccpy`: Copies a block of memory until a specific character is found.
- `ft_memmove`: Moves a block of memory, handling overlapping regions correctly.
- `ft_memchr`: Searches for a character in a block of memory.
- `ft_memcmp`: Compares two blocks of memory.
- `ft_calloc`: Allocates memory and initializes it to zero.

### String Manipulation
- `ft_strlen`: Returns the length of a string.
- `ft_strdup`: Duplicates a string.
- `ft_strcpy`: Copies a string.
- `ft_strncpy`: Copies up to `n` characters of a string.
- `ft_strcat`: Concatenates two strings.
- `ft_strncat`: Concatenates up to `n` characters of two strings.
- `ft_strlcat`: Concatenates strings with size-bounded.
- `ft_strchr`: Locates a character in a string.
- `ft_strrchr`: Locates the last occurrence of a character in a string.
- `ft_strstr`: Locates a substring in a string.
- `ft_strnstr`: Locates a substring in a string with size-bounded.
- `ft_strcmp`: Compares two strings.
- `ft_strncmp`: Compares up to `n` characters of two strings.
- `ft_strnew`: Allocates and initializes a new string.
- `ft_strdel`: Deletes a string.
- `ft_strclr`: Clears a string.
- `ft_striter`: Applies a function to each character of a string.
- `ft_striteri`: Applies a function to each character of a string with index.
- `ft_strmap`: Applies a function to each character of a string and creates a new string.
- `ft_strmapi`: Applies a function to each character of a string with index and creates a new string.
- `ft_strequ`: Compares two strings for equality.
- `ft_strnequ`: Compares up to `n` characters of two strings for equality.
- `ft_strsub`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings into a new string.
- `ft_strtrim`: Trims leading and trailing whitespace from a string.
- `ft_split`: Splits a string into an array of substrings based on a delimiter.

### Character Checks and Conversions
- `ft_isalpha`: Checks if a character is an alphabetic letter.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is an ASCII character.
- `ft_isprint`: Checks if a character is printable.
- `ft_toupper`: Converts a character to uppercase.
- `ft_tolower`: Converts a character to lowercase.

### File Descriptors
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### Linked Lists
- `ft_lstnew`: Creates a new linked list element.
- `ft_lstdelone`: Deletes a linked list element.
- `ft_lstdel`: Deletes a linked list.
- `ft_lstadd`: Adds an element to the start of a linked list.
- `ft_lstiter`: Iterates over a linked list and applies a function to each element.
- `ft_lstmap`: Maps a function to each element of a linked list and creates a new list.

### Number Conversion
- `ft_atoi`: Converts a string to an integer.
- `ft_itoa`: Converts an integer to a string.

## 🛠 Requirements

To compile and use the **libft** library, you will need:
- **GCC**: The GNU Compiler Collection.
- **Make**: A build automation tool.

## 🚀 Usage

### Compilation

To compile the **libft** library, navigate to the root directory of the project and run the following command:

```sh
make
```

This will generate a static library file named `libft.a`.

### Integration

To use **libft** in your own project, include the `libft.h` header file and link against the `libft.a` library. Here's an example:

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, World!");
    ft_putstr_fd(str, 1);
    ft_strdel(&str);
    return 0;
}
```

Compile your project with the **libft** library:

```sh
gcc -o my_program my_program.c -L. -lft
```

### Testing

You can test the library functions by compiling and running the provided test files. Use the following commands:

```sh
gcc -o test_ft_strlen test_ft_strlen.c -L. -lft
./test_ft_strlen
```

## ⚙️ Configuration

The **Makefile** provided in the root directory allows you to build, clean, and rebuild the library with ease. Here are the available targets:

- `make`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library file.
- `make re`: Cleans and recompiles the library.

You can also enable or disable specific compiler flags by modifying the `CFLAGS` variable in the **Makefile**.

```makefile
CFLAGS = -Wall -Wextra -Werror -I.
```

## 📋 License

This project is licensed under the MIT License. See the LICENSE file for more details.

## 🙏 Acknowledgements

This project is part of the curriculum at [42 Wolfsburg](https://www.42wolfsburg.de/). Special thanks to the 42 community for their support and contributions.

---

Feel free to reach out if you have any questions or need further assistance. Happy coding! 🚀
