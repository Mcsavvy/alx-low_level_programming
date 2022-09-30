# 0x0A. C - argc, argv

In the project, we learn how to receive arguments from the commandline into our `main()` function.

The declaration of `main()` now looks like this:

```c
int main(int argc, char *argv[])
{
    ...
}
```

### `int argc`

This holds the number of arguments passed to your program.

> NOTE: It also counts the name of the program along with the number of arguments passed.
> 
> > You'll see more on this shortly.

### `char *argv[]`

This holds a list of all the argument passed to your program, including the name of the program.

Imagine we have a program named `listfiles`, we can pass filenames (_arguments_) to the program by running it like this:

```bash
./listfiles file1 file2 file3
```

Now, inside the `main()` function of the program...

- `argc` = 4

- `argv` = {"./listfiles", "file1", "file2", "file3"}



**Look at the tasks below to gain more insight into how you can use these**

---

### 0. It ain't what they call you, it's what you answer to

Write a program that prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to compile it again
- You should not remove the path before the name of the program

[solution](0-whatsmyname.c)

### 1. Silence is argument carried out by other means

Write a program that prints the number of arguments passed into it.

- Your program should print a number, followed by a new line

[solution](1-args.c)

### 2. The best argument against democracy is a five-minute conversation with the average voter

Write a program that prints all arguments it receives.

- All arguments should be printed, including the first one
- Only print one argument per line, ending with a new line

[solution](2-args.c)

### 3. Neither irony nor sarcasm is argument

Write a program that multiplies two numbers.

- Your program should print the result of the multiplication, followed by a new line
- You can assume that the two numbers and result of the multiplication can be stored in an integer
- If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`

[solution](3-mul.c)

### 4. To infinity and beyond

- Print the result, followed by a new line
- If no number is passed to the program, print `0`, followed by a new line
- If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
- You can assume that numbers and the addition of all the numbers can be stored in an `int`

[solution](4-add.c)

### 5. Minimal Number of Coins for Change

Write a program that prints the minimum number of coins to make change for an amount of money.

- Usage: `./change cents`
- where `cents` is the amount of cents you need to give back
- if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`
- you should use `atoi` to parse the parameter passed to your program
- If the number passed as the argument is negative, print `0`, followed by a new line
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

[solution](100-change.c)


