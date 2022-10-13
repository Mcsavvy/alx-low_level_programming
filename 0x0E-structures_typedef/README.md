# 0x0E. C - Structures, typedef

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a **member** of the structure.

Unlike an [array](https://www.w3schools.com/c/c_arrays.php), a structure can contain many different data types (int, float, char, etc.).

---

## Create a Structure

You can create a structure by using the `struct` keyword and declare each of its members inside curly braces:

```c
struct MyStructure {   // Structure declaration  
  int myNum;           // Member (int variable)  
  char myLetter;       // Member (char variable)  
}; // End the structure with a semicolon
```

To access the structure, you must create a variable of it.

Use the `struct` keyword inside the `main()` method, followed by the name of the structure and then the name of the structure variable:

Create a struct variable with the name "s1":

```c
struct myStructure {  
  int myNum;  
  char myLetter;  
};

int main() {  
  struct myStructure s1;
  return 0;  
}
```

---

## Access Structure Members

To access members of a structure, use the dot syntax (`.`):

### Example

```c
// Create a structure called myStructure  
struct myStructure {  
  int myNum;  
  char myLetter;  
};

int main() {  
  // Create a structure variable of myStructure called **s1**  
  struct myStructure s1;

  // Assign values to members of s1  
  s1.myNum = 13;  
  s1.myLetter = 'B';

  // Print values  
  printf("My number: %d\n", s1.myNum);  
  printf("My letter: %c\n", s1.myLetter);

  return 0;  
}
```

Now you can easily create multiple structure variables with different values, using just one structure:

## Typedef

The C language contains the **`typedef` keyword** to allow users to provide alternative names for the primitive (e.g.,​ int) and user-defined​ (e.g struct) data types.

Remember, this keyword adds a new name for some existing data type but does not create a new type.

### `typedef` & `struct`

Using `typedef struct` results in a cleaner, more readable code, and saves the programmer keystrokes​. However, it also leads to a more cluttered global namespace which can be problematic for large programs.



You can use **typedef** to give a name to your user defined data types as well. For example, you can use typedef with structure to define a new data type and then use that data type to define structure variables directly as follows −

```c
typedef struct student_structure{
    char* name;
    char* surname;
    int year_of_birth;
} student;
```



## Tasks

### 0. Poppy

Define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

[solution](dog.h)

### 1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type `struct dog`

- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

[solution](1-init-dog.c)

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a `struct dog`

- Prototype: `void print_dog(struct dog *d);`
- Format: see example bellow
- You are allowed to use the standard library
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
- If `d` is `NULL` print nothing.

[solution](2-print_dog.c)

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`.

[solution](dog.h)

### 4. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails

[solution](4-new_dog.c)

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs.

- Prototype: `void free_dog(dog_t *d);`

[solution](5-free_dog.c

)
