*This activity has been created as part of the 42 curriculum by mobaidat.*

# ft_printf

## Description

ft_printf is a project from the 42 curriculum that recreates some of the behavior of the standard C `printf()` function.

The main goal of this activity is to learn how variadic functions work in C and how to handle a variable number of arguments using `va_list`, `va_start`, `va_arg`, and `va_end`.

The function has the following prototype:

```c
int ft_printf(const char *format, ...);
```

The project handles the following conversions:

- `%c` - prints a character
- `%s` - prints a string
- `%p` - prints a pointer address in hexadecimal
- `%d` - prints a decimal integer
- `%i` - prints an integer
- `%u` - prints an unsigned decimal integer
- `%x` - prints a hexadecimal number using lowercase letters
- `%X` - prints a hexadecimal number using uppercase letters
- `%%` - prints a percent sign

The final result is compiled into a static library called `libftprintf.a`.

## Algorithm and Structure

The `ft_printf` function reads the format string one character at a time.

When a normal character is found, it is printed directly.

When a `%` followed by a valid conversion is found, the program identifies the conversion and calls the appropriate helper function.

The variadic arguments are accessed using `va_list` and `va_arg`. Each conversion reads its argument using the correct type.

Separate helper functions are used for characters, strings, signed integers, unsigned integers, hexadecimal numbers, pointers, and the percent sign.

Recursive functions are used to print decimal and hexadecimal numbers digit by digit.

No complex data structure is required for this activity. A `va_list` is used to keep track of the variadic arguments while processing the format string.

## Instructions

Clone the repository and enter the project directory.

Compile the library using:

```bash
make
```

This creates:

```text
libftprintf.a
```

The Makefile also supports:

```bash
make clean
```

Removes object files.

```bash
make fclean
```

Removes object files and `libftprintf.a`.

```bash
make re
```

Cleans and recompiles the entire project.

To use `ft_printf` in another C program, include the header:

```c
#include "ft_printf.h"
```

and compile your program with the library.

Example:

```bash
cc main.c libftprintf.a -o program
```

## Resources

Resources used while learning the concepts required for this activity:

- C documentation and manual pages
- `man 3 printf`
- `man 3 stdarg`
- `man 2 write`
- 42 ft_printf subject

### AI Usage

AI was used as a learning and review tool during this activity.

It was used to:
- Explain variadic functions and `va_list`
- Explain `va_start`, `va_arg`, and `va_end`
- Review the logic of the implementation
- Explain Makefile rules and compilation
- Discuss edge cases and testing
- Help understand pointers, hexadecimal conversion, and return values

The implementation was written and reviewed while studying and understanding the behavior of each part of the activity.
