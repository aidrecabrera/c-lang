## printf()

To comprehend the code in the lessons, it's crucial to understand the printf() function, which facilitates text output to the terminal.

### Basic printf() Format

The basic structure is `printf("string to display", [list of optional parameters])`. For instance, `printf("Hello World!")` would display "Hello World!" in the terminal.

### Dynamic Output

Optional parameters enable dynamic insertion of values into the string, utilizing variables learned in previous lessons. For example:

```c
int day = 3;
printf("Hello World, today is the %drd!", day);
```

When the code is executed, `%d` is replaced by the value in the variable list. The order in the string corresponds to the order in the parameter list.

### Basic Formatting Types

To specify variable types for replacement:

- `%d` or `%i` for int
- `%f` for double or float
- `%c` for char

### Reserved Symbols for Formatting

Some common reserved symbols within the string include:

- `\n` for newline
- `\r` for carriage return
- `\t` for tab

These fundamental concepts of the printf() function are essential for effective text output in C programming.
