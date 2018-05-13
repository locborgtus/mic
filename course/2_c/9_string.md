# Strings #

Strings are array of chars. 

At the end of the string, there is a terminating marker of the integer value 0. It's also called the "terminating null character". This character takes up 1 space at the end. So every string length is actually the characters + 1.

Use double quotes to contain strings. Example:

```c
"hello world"
```

If you want to use certain reserved characters (like the double quote), use a backslash to "escape" the character:

```c
"hello \"world\""
```

Typical functions for string manipulation:

* strlen - get string length
* strcat - concatenate two strings
* strchr - string scanning operation, looks for the first occurrence of a string
* strcmp - compare two strings
* strcpy - copy a string
* strncat - concatenate one string with part of another
* strncmp - compare parts of two strings
* strncpy - copy part of a string
* strrchr - string scanning operation, looks for the last occurence instead of first

Write example programs to understand what they do. Use the man pages to see how they are called by typing `man strcat`, for example.
