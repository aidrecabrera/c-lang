# Variables in C

## What is a Variable?

The concept of a variable is basically the reference used to store information for future use in the program.

For example, declaring `"int score"` allows you to later assign, change, or compare values.

The basic structure of variable creation involves specifying the type followed by the variable name.

Don't worry; we'll delve into each aspect in detail. We'll cover the creation, naming, assignment, modification, and conversion of variables.

As a valuable tip, you can efficiently create multiple variables of the same type simultaneously by listing them with commas between their names, like "type variable1, variable_2, variable_3, variable4."

## Naming Conventions

Let's delve into the second aspect of variable declaration in C, which involves specifying the type followed by the variable name. However, C imposes certain restrictions on variable names that need to be adhered to.

Variable names can consist of upper and lower case letters, numbers, and underscores. The initial character must be a letter, whether upper or lower case. It's crucial to avoid using keywords as the complete name; for instance, "int" is prohibited, but "int_count" would be a permissible variable name. Remember these rules when crafting names for your variables.

```
#include<stdio.h>
int main() {
  int number!;
  int test value;
  int 1example;
  float int;
  printf("Hello World!\n");
}
```
