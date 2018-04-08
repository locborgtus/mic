# Strings #

Strings are array of chars. 

At the end of the string, there is a end-of-string marker of the integer value 0, also called the "terminating null character".

Use double quotes to contain strings. Example:

```c
"hello world"
```

If you want to use certain reserved characters (like the double quote), use a backslash to "escape" the character:

```c
"hello \"world\""
```

Typical functions for string manipulation:

* strcat - concatenate two strings
* strchr - string scanning operation
* strcmp - compare two strings
* strcpy - copy a string
* strlen - get string length
* strncat - concatenate one string with part of another
* strncmp - compare parts of two strings
* strncpy - copy part of a string
* strrchr - string scanning operation

Write example programs to understand what they do. Use the man pages to see how they are called by typing `man strcat`, for example.
