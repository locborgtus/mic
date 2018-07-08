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
* strcpy - copy a string
* strchr - string scanning operation, looks for the first occurrence of a character
* strcat - concatenate two strings
* strstr - find a string inside another string (needle in a haystack)
* strcmp - compare two strings

## Exercise 1

Write example programs to understand what they do. Use the man pages to see how they are called by typing `man strcat`, for example.

## Project 1

Write each string function described above from scratch.

At this time during the lesson, the student should know enough about loops, variables, and arrays to be able to write these functions from scratch. First do this on a white board or on paper, then transfer the code to the computer and see if it works.

Be rigorous about writing test cases. Test as much of the strange (corner) cases as possible.

## Exercise 2

Complete a series of these exercises:

* count the number of vowels, consonants
* Find the Frequency of Characters in a String
* Remove Characters in String Except Alphabets (hint: alphabet characters are together)
