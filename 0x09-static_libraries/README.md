# 0x09. C - Static libraries

A static library is a collection of reusable code that can be shared and reused. A library is usually in form of an archive (ends with the `.a` extension).

### How to create libraries from C source files

#### 1. convert C source files to object files

Remember the stages of **compilation**

1. Preprocessing

2. Compilation

3. Assembly

4. Linking



An object file is a file that has not gone through the last stage of compilation - _linking_.

To create object files we need to invoke `gcc` with the `-c` option.

```bash
$ ls
add.c
subtract.c
$ gcc -c add.c subtract.c
$ ls
add.c
add.o
subtract.c
subtract.o
```

> object files usually end with `.o`

#### 2. Use `ar` to create a library

`ar` is the command we use to create libraries. We need to tell `ar` the name of the library we want to create.

Let's call our library "calculate" 😎.

```bash
$ ar -rc libcalculate.a add.o subtract.o
$ ls
add.c
add.o
libcalculate.a
subtract.c
subtract.o
```

> libraries usually start with `lib` end with `.a`, hence `libcalculate.a`

##### What does the `-rc` mean??

Well, it tells `ar` to **create** a new `libcalculate.h` library if it doesn't exist, but if it does, it should **recreate** the library.

#### 3. Index the library

This step is **optional** but pretty **useful**. When you index a library, you generate an index containing all the cool stuffs in the library. Which makes linking very fast!

##### How do you index a library??

by using a command called `ranlib` like this

```bash
$ ranlib libcalculate.h
```

#### 4. Use your library 🕺

But first you need to do on little thing.

****Create an header file containing the prototypes of all the functions in your library***, easy!.

Inside our `calcute.h` header file...

```c
int add(int a, int b);

int subtract(int a, int b);
```

Pheew!, finally.

```c
#include "calculate.h"
#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;
    int result;

    result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);
    result = subtract(a, 3);
    printf("%d - %d = %d\n", a, b, result);

    return (0);
}
```

#### How do you compile??

Easy! You just need to tell `gcc` where to find your library and the name of you library.

```bash
$ gcc main.c -L . -l calculate
```

> > The `-L` option tells gcc where to find your library, and we supplied `.` which means your current working directory
> 
> 
> 
> > The `-l` option tells gcc the name of the library _without the `lib` prefix and the `.a` suffix_



```bash
$ ./a.out
5 + 3 = 8
5 - 3 = 2
```

---

## Tasks

### 0. A library is not a luxury but one of the necessities of life

Create the static library `libmy.a` containing all the functions listed below:

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

[library](libmy.a)

### 1. Without libraries what have we? We have no past and no future

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

[solution](create_static_lib.sh)


