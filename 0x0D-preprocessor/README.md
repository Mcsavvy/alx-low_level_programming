# 0x0D. C - Preprocessor

The **C Preprocessor** is not a part of the compiler, but is a separate step in the compilation process. In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation. We'll refer to the C Preprocessor as CPP.

All preprocessor commands begin with a hash symbol (`#`). It must be the first nonblank character, and for readability, a preprocessor directive should begin in the first column. The following section lists down all the important preprocessor directives.

| Directive    | Description                                                           |
| ------------ | --------------------------------------------------------------------- |
| **#define**  | Substitutes a preprocessor macro.                                     |
| **#include** | Inserts a particular header from another file.                        |
| **#undef**   | Undefines a preprocessor macro.                                       |
| **#ifdef**   | Returns true if this macro is defined.                                |
| **#ifndef**  | Returns true if this macro is not defined.                            |
| **#if**      | Tests if a compile time condition is true.                            |
| **#else**    | The alternative for `#if`.                                            |
| **#elif**    | short for `else if`.                                                  |
| **#endif**   | Ends preprocessor conditional.                                        |
| **#error**   | Prints error message on stderr.                                       |
| **#pragma**  | Issues special commands to the compiler, using a standardized method. |

## Preprocessors Examples

Analyze the following examples to understand various directives.

```c
#define MAX_ARRAY_LENGTH 20
```

This directive tells the CPP to replace instances of MAX_ARRAY_LENGTH with 20. Use `#define` for constants to increase readability.

```c
#include <stdio.h>
#include "myheader.h"
```

These directives tell the CPP to get **stdio.h** from **System Libraries** and add the text to the current source file. The next line tells the CPP to get **myheader.h** from the local directory and add the content to the current source file.

```c
#undef FILE_SIZE
#define FILE_SIZE 42
```

It tells the CPP to undefine existing FILE_SIZE and define it as 42.

```c
#ifndef MESSAGE
#define MESSAGE "You wish!"
#endif
```

It tells the CPP to define MESSAGE only if MESSAGE isn't already defined.

#ifdef DEBUG   /* Your debugging statements here */
#endif

It tells the CPP to process the statements enclosed if DEBUG is defined. This is useful if you pass the *-DDEBUG* flag to the gcc compiler at the time of compilation. This will define DEBUG, so you can turn debugging on and off on the fly during compilation.

## Predefined Macros

ANSI C defines a number of macros. Although each one is available for use in programming, the predefined macros should not be directly modified.

| Macro      | Description                                                      |
| ---------- | ---------------------------------------------------------------- |
| `__DATE__` | The current date as a character literal in "MMM DD YYYY" format. |
| `__TIME__` | The current time as a character literal in "HH:MM:SS" format.    |
| `__FILE__` | This contains the current filename as a string literal.          |
| `__LINE__` | This contains the current line number as a decimal constant.     |
| `__STDC__` | Defined as 1 when the compiler complies with the ANSI standard.  |

## Tasks

### 0. Object-like Macro

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

[solution](0-object_like_macro.h)

### 1. Pi

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

[solution](1-pi.h)

### 2. File name

Write a program that prints the name of the file it was compiled from, followed by a new line.

- You are allowed to use the standard library

[solution](2-main.c)

### 3. Function-like macro

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

[solution](3-function_like_macro.h)

### 4. SUM

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

[solution](4-sum.h)
