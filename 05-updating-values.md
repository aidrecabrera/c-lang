## Updating Variable Values

In a previous discussion, we outlined two instances when you can assign a value to a variable. While we explored setting values during declaration, this alone would limit the usefulness of variables (an exception will be discussed shortly). Interestingly, variables can be assigned values at any point in the code's execution. For instance:

```c
int total_units;
// ...
// ...
// ...
total_units = 3;
```

Note the shift in referencing the variable type after declaration; we now simply use the variable's name. Additionally, you can assign a variable to have the same value as another variable, like a = b.

It's crucial to be aware that altering the value of b subsequently will result in mismatched values (there's a method to link the two variables for consistent values, but that's a topic for a later lesson).

Fear not; we will delve into more advanced techniques for manipulating variable values in upcoming lessons.