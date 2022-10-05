# 0x0B. C - malloc, free

The `malloc` function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and `malloc` will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function `free`.

### Automatic allocation

When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.

```c
/**
 * cisfun - function used for concept introduction
 * @n1: number of projects
 * @n2: number of tasks
 *
 * Return: nothing.
 */
void cisfun(unsigned int n1, unsigned int n2)
{
    int n;
    char c;
    int *ptr;
    char array[3];
}

```



### Dynamic allocation

#### Malloc

The `malloc` function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

- Prototype: `void *malloc(size_t size);`
- where `void *` means it is a pointer to the type of your choice
- and `size` is the number of bytes your need to allocate

```c
#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and ree
 *
 * Return: 0.
 */
int main(void)
{
    char *str;

    str = malloc(sizeof(char) * 3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);
    return (0);
}

// OUTPUT
OK
```



## Tasks

### 0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars, and initializes it with a specific char.

- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if size = `0`
- Returns a pointer to the array, or `NULL` if it fails

[solution](0-create_array.c)

### 1. The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype: `char *_strdup(char *str);`
- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
- Returns `NULL` if str = NULL
- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

[solution](1-strdup.c)

### 2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.

- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
- if `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure

[solution](2-str_concat.c)

### 3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2 dimensional array of integers.

- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to `0`
- The function should return `NULL` on failure
- If `width` or `height` is `0` or negative, return `NULL`

[solution](3-alloc_grid.c)

### 4. It's not bragging if you can back it up

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

- Prototype: `void free_grid(int **grid, int height);`
- Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

[solution](4-free_grid.c)

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

Write a function that concatenates all the arguments of your program.

- Prototype: `char *argstostr(int ac, char **av);`
- Returns `NULL` if `ac == 0` or `av == NULL`
- Returns a pointer to a new string, or `NULL` if it fails
- Each argument should be followed by a `\n` in the new string

[solution](100-argstostr.c)

### 6. I will show you how great I am

Write a function that splits a string into words.

- Prototype: `char **strtow(char *str);`
- The function returns a pointer to an array of strings (words)
- Each element of this array should contain a single word, null-terminated
- The last element of the returned array should be `NULL`
- Words are separated by spaces
- Returns `NULL` if `str == NULL` or `str == ""`
- If your function fails, it should return `NULL`

[solution](101-strtow.c)
