*This activity has been created as part of the 42 curriculum by nben-ama.*

## Description
ft_printf is a 42 school project that consists of recoding the printf function from the C standard library. The goal is to discover variadic functions in C while building a library supporting standard conversions.

## Instructions

### Compilation
To compile the library, run the provided Makefile:
```shell
make
```

Available Makefile rules:
- `make`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library binary.
- `make re`: Recompiles everything.

### Usage
Include the header file in your C project:
```c
#include "ft_printf.h"
```
And link `libftprintf.a` when compiling your program with `cc`.

## Resources & AI Usage
- **Documentation:** Man pages for `printf`, `stdarg.h`.
- **AI Usage:** AI tools were used as a conceptual learning aid to understand variadic functions (`va_start`, `va_arg`, `va_end`) and making some parts of this readme.

## Algorithm & Data Structure
The function loops through the format string character by character. It initializes the variable arguments using va_start, if it encounters a % followed by a character, it skips the %, reads the format specifier, and calls a helper function print_format to handle the argument and count the printed characters.
