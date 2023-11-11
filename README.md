# ft_printf

## Project Overview
`ft_printf` represents a custom implementation of the printf function found in the C standard library. The objective of this project is to reproduce the capabilities of the printf function while allowing for the incorporation of custom format specifiers. It serves as a versatile and robust tool for formatting and presenting text within C programs. During the development of this project, I gained valuable experience in utilizing the va_arg list to handle a dynamic number of arguments.

## Conversion Specifiers

| Conversion | Short Description                                            |
|------------|-------------------------------------------------------------|
| `%c`       | Print a single character.                                   |
| `%s`       | Print a string of characters.                               |
| `%p`       | The void * pointer argument is printed in hexadecimal.      |
| `%d`       | Print a decimal (base 10) number.                            |
| `%i`       | Print an integer in base 10.                                 |
| `%u`       | Print an unsigned decimal (base 10) number.                 |
| `%x`       | Print a number in hexadecimal (base 16), with lowercase.   |
| `%X`       | Print a number in hexadecimal (base 16), with uppercase.   |
| `%%`       | Print a percent sign.                                        |
