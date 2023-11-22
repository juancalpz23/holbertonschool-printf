### holbertonschool-printf

## Project Description

We made our own printf() function in this group project.

We decided to name our function "printf()", This function uses the output according to the format and write output to stdout (standard output stream).

The format string is a char string. The format contains ordinary characters that are copied without change on the output stream with conversion specifications which results in fetching zero or more arguments.

A conversion specifier is a character that specifies what type of conversion is gonna be applied. The specifiers are:
1. i: int argument for decimals.
2. c: int argument for char.
3. s: const char argument for pointer to a string not including NULL '\0'.
4. %: no argument converted. % is written and the full specification is '%%".

## Functions
### int _char(char c)
This function prints a character to the standar output stream (stdout).

### int _str(char *s)
This functions prints a string to the standard output stream(stdout).

### int _def(char c)
This functions prints % to the standard output stream (stdout).

### int _printf(const char *format, ...)
This function contains everything that's gonna be printed to the standard output stream (stdout).

### int _int(int num)
This function prints integers and decimals to the standard output stream (stdout).

### int _strlen(char *s)
This function prints the lenght of the string to the standard output stream (stdout).

### int _uint(unsigned int n)
This function prints an unsigned integer to the standard output stream (stdout).

### int _oct(unsigned int n)
This function prints an integer to the octal base to the standard output stream (stdout).

### int _hex(unsigned int n, int uppercase)
This functions prints an hexadecimal integer to the standard output stream (stdout).

### int _ptr(void *ptr)
This function prints a memory address pointer to the standard output stream (stdout).

## Return Value
If the return is succesfull, printf() function will return the number of characters printed without the NULL '\0' byte at the end of tha string. If the return is not succesfull or there is and error, the return will be a negative value.

## Project Files
1. man_3_printf - functions man page.
2. _printf.c -E contains the function for the output of the format.
3. main.h - contains prototypes to be used.
4. functions.c - contains all the functions we decided to use for this project.
5. main.c - file that contains all the prints required for this project.

## Authors
Juan C. Lopez and Livan A. Hernandez
