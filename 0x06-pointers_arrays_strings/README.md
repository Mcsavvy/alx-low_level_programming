# More pointers, arrays and strings

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

#### 0. strcat

Write a function that concatenates two strings.

- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
- Returns a pointer to the resulting string `dest`

[solution](/0x06-pointers_arrays_strings/0-strcat.c)

#### 1. strncat

Write a function that concatenates two strings.

- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that
  - it will use at most `n` bytes from `src`; and
  - `src` does not need to be null-terminated if it contains `n` or more bytes
- Return a pointer to the resulting string `dest`

[solution](/0x06-pointers_arrays_strings/1-strncat.c)

#### 2. strncpy

Write a function that copies a string.

- Prototype: `char *_strncpy(char *dest, char *src, int n);`  

- Your function should work exactly like `strncpy`

[solution](/0x06-pointers_arrays_strings/2-strncpy.c)

#### 3. strcmp

Write a function that compares two strings.

- Prototype: `int _strcmp(char *s1, char *s2);`
- Your function should work exactly like `strcmp`

[solution](/0x06-pointers_arrays_strings/3-strcmp.c)

#### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

Write a function that reverses the content of an array of integers.

- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array

[solution](/0x06-pointers_arrays_strings/4-rev_array.c)

#### 5. Always look up

Write a function that changes all lowercase letters of a string to uppercase.

- Prototype: `char *string_toupper(char *);`

[solution](/0x06-pointers_arrays_strings/5-string_toupper.c)

#### 6.Expect the best. Prepare for the worst. Capitalize on what comes

Write a function that capitalizes all words of a string.

- Prototype: `char *cap_string(char *);`
- Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

[solution](/0x06-pointers_arrays_strings/6-cap_string.c)

#### 7. Mozart composed his music not for the elite, but for everybody

Write a function that encodes a string into [1337](https://alx-intranet.hbtn.io/rltoken/9v9KfpvWnL0GoMu5mozbug "1337").

- Letters `a` and `A` should be replaced by `4`  

- Letters `e` and `E` should be replaced by `3`  

- Letters `o` and `O` should be replaced by `0`  

- Letters `t` and `T` should be replaced by `7`  

- Letters `l` and `L` should be replaced by `1`  

- Prototype: `char *leet(char *);`

- You can only use one `if` in your code

- You can only use two loops in your code

- You are not allowed to use `switch`

- You are not allowed to use any ternary operation

[solution](/0x06-pointers_arrays_strings/7-leet.c)
