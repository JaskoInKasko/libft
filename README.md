

# Libft

## What the program does

Libft is a custom C library developed as part of the 42 curriculum. The project involves recreating essential functions from the standard C library and implementing additional utility functions for string manipulation, memory management, character handling, and linked list operations.

The library provides reusable functions that can be compiled and linked into other C projects, reducing the need to repeatedly implement common operations.

The project includes:

- **Character handling:** Implements functions for checking and converting characters, such as `ft_isalpha()`, `ft_isdigit()`, `ft_isalnum()`, and `ft_toupper()`.
- **String manipulation:** Provides functions for measuring, comparing, searching, and modifying strings, such as `ft_strlen()`, `ft_strncmp()`, `ft_strchr()`, and `ft_strlcpy()`.
- **Memory management:** Implements memory-related functions such as `ft_memset()`, `ft_memcpy()`, `ft_memmove()`, `ft_memchr()`, and `ft_calloc()`.
- **Memory allocation:** Provides utility functions for dynamically allocating and managing memory.
- **String conversion:** Implements functions such as `ft_atoi()` and `ft_itoa()` for converting between strings and integers.
- **Additional utility functions:** Includes functions such as `ft_substr()`, `ft_strjoin()`, `ft_strtrim()`, `ft_split()`, and `ft_strmapi()`.
- **Linked list management:** Implements operations for creating, adding, deleting, and iterating through singly linked lists using the `t_list` structure.
- **Reusable library:** Compiles the functions into a static library (`libft.a`) that can be linked with other C projects.

## How to execute the project

Compile the library using the Makefile:

```bash
make
```

This generates the static library:

```bash
libft.a
```

To use the library in another C project, include the header file:

```c
#include "libft.h"
```

Compile your source files together with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the resulting executable:

```bash
./program
```

Additional Makefile commands:

```bash
make bonus
make clean
make fclean
make re
```

