# C program to print source code of itself as output
How to print source code of itself using __FILE__ macro

Printing source code of a file is no complex. You should only bother about how to get path of current file without user input, rest is simple read and print file contents.

C programming supports various preprocessor directives (macros) for logging and exception handling. Macros such as

__FILE__ expands to path of current file.
__LINE__ expands to current line number where used.
__DATE__ expands to string pointing to today's date.
__TIME__ expands to current time.
__FUNCTION__ expands to current function name where used. C99

To print source code of a program itself as output, you can use __FILE__ to get path of current file.
