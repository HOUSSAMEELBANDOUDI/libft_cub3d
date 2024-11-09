# libft - 42cursus

## Development Repository for 42cursus' libft Project

For further information about 42cursus and its projects, please refer to [42cursus repository](https://github.com/42cursus).

## About

The aim of this project is to code a C library regrouping common functions that you'll be allowed to use in all your other projects.

### TL;DR

This project consists of coding basic C functions (see below), which are then compiled into a library for use in other projects of the cursus.

## Functions

### Functions from `<ctype.h>` library

- `ft_isascii`: Test for ASCII character.
- `ft_isalnum`: Alphanumeric character test.
- `ft_isalpha`: Alphabetic character test.
- `ft_isdigit`: Decimal-digit character test.
- `ft_isprint`: Printing character test (space character inclusive).
- `ft_tolower`: Upper case to lower case letter conversion.
- `ft_toupper`: Lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

- `ft_atoi`: Convert ASCII string to integer.
- `ft_calloc`: Memory allocation.

### Functions from `<strings.h>` library

- `ft_bzero`: Write zeroes to a byte string.
- `ft_memset`: Write a byte to a byte string.
- `ft_memchr`: Locate byte in byte string.
- `ft_memcmp`: Compare byte string.
- `ft_memmove`: Copy byte string.
- `ft_memcpy`: Copy memory area.
- `ft_memccpy`: Copy string until character found.

### Functions from `<string.h>` library

- `ft_strlen`: Find length of string.
- `ft_strchr`: Locate character in string (first occurrence).
- `ft_strrchr`: Locate character in string (last occurrence).
- `ft_strnstr`: Locate a substring in a string (size-bounded).
- `ft_strncmp`: Compare strings (size-bounded).
- `ft_strnrcmp`: Reversely compare strings (size-bounded).
- `ft_strdup`: Save a copy of a string (with malloc).
- `ft_strlcpy`: Size-bounded string copying.
- `ft_strlcat`: Size-bounded string concatenation.

### Non-standard functions

- `ft_putchar_fd`: Output a character to a given file.
- `ft_putstr_fd`: Output string to a given file.
- `ft_putendl_fd`: Output string to a given file with newline.
- `ft_putnbr_fd`: Output integer to a given file.
- `ft_itoa`: Convert integer to ASCII string.
- `ft_substr`: Extract substring from string.
- `ft_strtrim`: Trim beginning and end of string with specified characters.
- `ft_strjoin`: Concatenate two strings into a new string (with malloc).
- `ft_split`: Split string, with specified character as delimiter, into an array of strings.
- `ft_strmapi`: Create a new string from modifying string with specified function.

### Linked list functions

- `ft_lstnew`: Create a new list.
- `ft_lstsize`: Count elements of a list.
- `ft_lstlast`: Find the last element of a list.
- `ft_lstadd_back`: Add a new element at the end of a list.
- `ft_lstadd_front`: Add a new element at the beginning of a list.
- `ft_lstdelone`: Delete an element from a list.
- `ft_lstclear`: Delete a sequence of elements of a list from a starting point.
- `ft_lstiter`: Apply a function to the content of all list's elements.
- `ft_lstmap`: Apply a function to the content of all list's elements into a new list.

**Note:** Functions marked with * are bonus functions (not mandatory by the project's subject).

## Third-Party Testers

- [jtoty/Libftest](https://github.com/jtoty/Libftest)
- [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)
- [t0mm4rx/libftdestructor](https://github.com/t0mm4rx/libftdestructor)


