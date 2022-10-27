# 0x14. C - Bit manipulation

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG)

Working on bytes, or data types comprising of bytes like ints, floats, doubles or even data structures which stores large amount of bytes is normal for a programmer. In some cases, a programmer needs to go beyond this - that is to say that in a deeper level where the importance of bits is realized.

Operations with bits are used in **Data compression** (data is compressed by converting it from one representation to another, to reduce the space) ,**Exclusive-Or Encryption** (an algorithm to encrypt the data for safety issues). In order to encode, decode or compress files we have to extract the data at bit level. Bitwise Operations are faster and closer to the system and sometimes optimize the program to a good level.

We all know that 1 byte comprises of 8 bits and any integer or character can be represented using bits in computers, which we call its binary form(contains only 1 or 0) or in its base 2 form.  
Example:  

1) 14 = {1110 }2  
   = 1 * 23 + 1 * 22 + 1 * 21 + 0 * 20  
   = 14.

2) 20 = {10100 }2  
   = 1 * 24 + 0 * 23 + 1 * 22 + 0 * 21 + 0 * 20  
   = 20.

For characters, we use ASCII representation, which are in the form of integers which again can be represented using bits as explained above.



**Bitwise Operators:**

There are different bitwise operations used in the bit manipulation. These bit operations operate on the individual bits of the bit patterns. Bit operations are fast and can be used in optimizing time complexity. Some common bit operators are:



**NOT ( ~ ):** Bitwise NOT is an unary operator that flips the bits of the number i.e., if the ith bit is 0, it will change it to 1 and vice versa. Bitwise NOT is nothing but simply the one’s complement of a number. Lets take an example.
N = 5 = 101<sub>2</sub>
~N = ~5 = ~101<sub>2</sub> = 010<sub>2</sub> = 2



**AND ( & ):** Bitwise AND is a binary operator that operates on two equal-length bit patterns. If both bits in the compared position of the bit patterns are 1, the bit in the resulting bit pattern is 1, otherwise 0.

A = 5 = 101<sub>2</sub>

B = 3 = 011<sub>2</sub>

A & B = 101<sub>2</sub> & 011<sub>2</sub> = 001<sub>2</sub> = 1



**OR ( | ):** Bitwise OR is also a binary operator that operates on two equal-length bit patterns, similar to bitwise AND. If both bits in the compared position of the bit patterns are 0, the bit in the resulting bit pattern is 0, otherwise 1.
A = 5 = 101<sub>2</sub>

B = 3 = 011<sub>2</sub>

A | B = 101<sub>2</sub> | 011<sub>2</sub> = 111<sub>2</sub> = 7



**XOR ( ^ ):** Bitwise XOR also takes two equal-length bit patterns. If both bits in the compared position of the bit patterns are 0 or 1, the bit in the resulting bit pattern is 0, otherwise 1.
A = 5 = 101<sub>2</sub>

B = 3 = 011<sub>2</sub>

A ^ B = 101<sub>2</sub> ^ 011<sub>2</sub> = 110<sub>2</sub> = 6



**Left Shift ( << ):** Left shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the left and append 0 at the end. Left shift is equivalent to multiplying the bit pattern with  ( if we are shifting k bits ).

```
1 << 1 = 2 = 21  
1 << 2 = 4 = 22 1 << 3 = 8 = 23  
1 << 4 = 16 = 24
...
1 << n = 2n
```





**Right Shift ( >> ):** Right shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the right and append 1 at the end. Right shift is equivalent to dividing the bit pattern with 2k ( if we are shifting k bits ).  

```
4 >> 1 = 2  
6 >> 1 = 3  
5 >> 1 = 2  
16 >> 4 = 1
```

### Resources:

- [Basics of Bit Manipulation Tutorials & Notes | Basic Programming | HackerEarth](https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/)

- [What is Bit Manipulation? - Grokking Bit Manipulation for Coding Interviews](https://www.educative.io/courses/bit-manipulation/qANxozg6W5k)



## Tasks

### 0. 0

Write a function that converts a binary number to an `unsigned int`.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- where `b` is pointing to a string of `0` and `1` chars
- Return: the converted number, or 0 if
  - there is one or more chars in the string `b` that is not `0` or `1`
  - `b` is `NULL`

[solution](0-binary_to_uint.c)

### 1. 1

Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use `malloc`
- You are not allowed to use the `%` or `/` operators

[solution](1-print_binary.c)

### 2. 10

Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to get
- Returns: the value of the bit at index `index` or `-1` if an error occured

[solution](2-get_bit.c)

### 3. 11

Write a function that sets the value of a bit to `1` at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

[solution](3-set_bit.c)

### 4. 100

Write a function that sets the value of a bit to `0` at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

[solution](4-clear_bit.c)

### 5. 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the `%` or `/` operators

[solution](5-flip_bits.c)

### 6. Endianness

Write a function that checks the endianness.

- Prototype: `int get_endianness(void);`
- Returns: `0` if big endian, `1` if little endian

[solution](100-get_endianness.c)

### 7. Crackme3

Find the password for [this program](https://github.com/holbertonschool/0x13.c "this program").

- Save the password in the file `101-password`
- Your file should contain the exact password, no new line, no extra space

[solution](101-password)
