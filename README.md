# printf

This project contains a custom implementation of the `_printf` function, which mimics the behavior of the standard C library function `printf`. The `_printf` function allows you to format and print various data types to the standard output.

## Function Descriptions

### `print_char`
```
int print_char(va_list list);
```
Prints a character to the standard output.

### `print_string`
```
int print_string(va_list list);
```
Prints a string to the standard output.

### `print_int`
```
int print_int(va_list list);
```
Prints an integer to the standard output.

### `func_percent`
```
int (*func_percent(char c))(va_list list);
```
Decides which printing function to use based on the character following '%'.

### `_printf`
```
int _printf(const char *format, ...);
```
The main function that implements the custom printf functionality. It formats and prints data to the standard output according to the specified format.

## Usage
To use the `_printf` function, include the "main.h" header file in your C program.

```
#include "main.h"
```

Then, call the `_printf` function with the desired format string and any additional arguments:

```
int result = _printf("Format string", arg1, arg2, ...);
```

## Supported Format Specifiers
The `_printf` function supports the following format specifiers:

- `%c`: for characters
- `%s`: for strings
- `%d` or `%i`: for signed integers

Any other characters following the '%' will be printed as-is.

## Example
Here's an example of how to use the `_printf` function:

```
#include "main.h"

int main()
{
    char character = 'A';
    char *string = "Hello";
    int num = 42;

    _printf("Character: %c\n", character);
    _printf("String: %s\n", string);
    _printf("Integer: %d\n", num);

    return 0;
}
```

Output:
```
Character: A
String: Hello
Integer: 42
```
