# Variables in C

## What is a Variable?

The concept of a variable is basically the reference used to store information for future use in the program.

For example, declaring `"int score"` allows you to later assign, change, or compare values.

The basic structure of variable creation involves specifying the type followed by the variable name.

Don't worry; we'll delve into each aspect in detail. We'll cover the creation, naming, assignment, modification, and conversion of variables.

As a valuable tip, you can efficiently create multiple variables of the same type simultaneously by listing them with commas between their names, like `"type variable1, variable_2, variable_3, variable4."`

## Naming Conventions

Let's delve into the second aspect of variable declaration in C, where we define the type followed by the variable name. However, C imposes certain constraints on variable naming. Take note of the following guidelines:

1. Names can consist of uppercase and lowercase letters, numbers, and underscores.
2. The initial character must be a letter, either uppercase or lowercase.
3. Avoid using keywords as the entire name; for instance, `"int"` is not allowed, but `"int_count"` is acceptable.

When crafting variable names, adhere to these rules to ensure compliance. Now, let's explore a practical example to reinforce these concepts:

```c
#include <stdio.h>

int main() {
    // Correct variable declarations
    int myVariable;
    float price_per_unit;
    char userName_123;

    // Incorrect declarations (fix these to make the code compile)
    int 3rdAttempt;  // Error: Initial character must be a letter
    double totalAmount$;  // Error: '$' is not allowed
    char break;  // Error: 'break' is a keyword

    printf("Hello World\n");
    return 0;
}
```

Your task is to identify and rectify the errors in the code. Once corrected, the output window should display "Hello World." Let's ensure the variables align with the specified naming conventions.