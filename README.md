# 00-variables.md

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

# 01-data-types.md

## Lesson: Data Types in C Programming

The type in the template "type variable_name" refers to the data type of a variable, indicating the kind of information it can store. In C, common data types include int, float, double, and char.

### Common Data Types

- **int:** Represents whole numbers within the range of -2,147,483,648 to 2,147,483,647.
- **float:** Represents numbers with possible decimals, accurate up to 6 decimal places.
- **double:** Represents numbers with possible decimals, accurate up to 15 decimal places.
- **char:** Stores a single character, either a letter or number.

When declaring a variable in C, it is essential to specify its type. Once set, the variable can only store information of that specified type. For example, an int type variable can only store whole numbers.

### Data Type Details

| Type   | Description                                   | Values                                      |
|--------|-----------------------------------------------|---------------------------------------------|
| int    | A whole number                                | -2,147,483,648 to 2,147,483,647             |
| float  | A number with possible decimals               | Up to 6 decimal places                      |
| double | A number with possible decimals               | Up to 15 decimal places                     |
| char   | Stores one character (letter or number)       | A single character                         |


# 02-printf.md

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


# 03-initialization.md

## Initialization

Now, let's delve into the concept of initializing variables in the C programming language. Once you've defined a variable, giving it a name and specifying its data type, the next step is to assign a value to it.

At this point, the variable is empty and lacks practical significance. The potency of a variable lies in its capacity to be assigned, modified, and examined.

### Setting Values During Variable Creation

There are two primary methods to assign a value. Let's begin by exploring how to set a value during the creation of the variable itself. Consider the following example:

```c
int example = 3;
```

In this instance, not only have you established the variable, assigned it the name "example," and designated it to store whole numbers, but you have also initialized its value to 3. This approach streamlines the process by combining these actions into a single line, enhancing efficiency.

### Initializing a Character Variable

When working with character variables, it is imperative to enclose the value in single quotes. Take a look at the following examples:

```c
char foo = 'a';
char goo = '2';
```

In these cases, you declare character variables "foo" and "goo" with values 'a' and '2', respectively, using single quotes for proper initialization.

Remember, understanding how to initialize variables is fundamental to unlocking their potential within the C programming language.


# 04-double-v-precision.md

# Understanding Decimal Types

In the realm of C programming, the existence of both `float` and `double` types may seem redundant at first. However, this duality serves distinct purposes.

## Different Precision, Different Roles

In essence, the distinction lies in precision and memory usage. A `float` offers a precision of 6 decimal places and occupies 4 bytes, whereas a `double` provides a higher precision of 15 decimal places and consumes 8 bytes. The trade-off here is evident: `float` sacrifices precision for reduced memory footprint, while `double` prioritizes precision over memory efficiency.

## Speed versus Precision

Adding another layer to the decision-making process, the execution speed varies. Despite `float` using less memory, `double` tends to run faster. This implies that opting for speed may come at the expense of increased memory usage.

## Handling Rounding Issues

An additional consideration is how the system rounds values stored in either type. Rounding discrepancies can lead to unexpected outcomes, particularly with `float` due to its lower precision. Consequently, in scenarios demanding accuracy, such as scientific, medical, or financial applications, the preference leans heavily towards employing `double` to ensure precision and mitigate rounding issues.

```c
#include <stdio.h>

int main() {

  // Experiment with the value of numOfLoops to observe the effects on float precision
  int numOfLoops = 10;

  // Please refrain from modifying anything below this point
  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  // Display the initial values
  printf("At the start, our target float b is: %f\n", b);
  printf("At the start, our target double y is: %f\n", y);

  // Loop through and add 0.1 to variables b and y on each iteration
  for (int i = 0; i < numOfLoops; i++) {
    b += a;
    y += x;
  }

  // Display the final values after the loop
  printf("At the end, our target float b is: %f\n", b);
  printf("At the end, our target double y is: %f\n", y);

}
```

In this example, you are encouraged to manipulate the `numOfLoops` variable to observe the impact on float precision. The program repeatedly adds 0.1 to both a float (`b`) and a double (`y`).

As `numOfLoops` increases, the float (`b`) will exhibit unexpected results due to its lower precision and rounding issues compared to the double (`y`). The provided code includes comments for clarity.

# 05-updating-values.md

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

# 06-constants.md

## Constants

While variable values in a program are typically subject to change, certain scenarios demand that a variable's value remains constant throughout execution.

This is where constants play a crucial role. These specialized types prohibit any alterations once the value is established during declaration.

Any fundamental data type in C, as discussed earlier, can be declared as a constant by prefixing the keyword `const` before the type. Consequently, our conventional template of `type variable_name` transforms into `const type variable_name`.

Adhering to a best practice, it is recommended to employ all uppercase letters when declaring a constant:

```c
const int DAYSINWEEK = 7;


# 07-type-casting.md

## Type Casting

Occasionally, it becomes necessary or beneficial to modify the data type of a variable for specific purposes.

For example, if you have a double representing a test score percentage, such as 0.95, you might prefer displaying it as 95% to the user.

It's essential to note that in such cases, the type or value of the source variable isn't altered; rather, it is presented as a new type or stored in a variable of a different type.

Consider the following scenario:

```c
int a;
double b = 3.0;
a = b;
```

There are two types of conversions: implicit and explicit. In implicit conversion, when you set one variable to be the same as another (e.g., a = b), and their types differ, the compiler attempts to perform the conversion.

However, this can be risky, as the variable's runtime values may not be implicitly convertible to the new type. Our example above demonstrates implicit conversion, where the compiler makes its best guess.

Alternatively, explicit conversion involves specifying the desired type explicitly. For instance, in our example, we could modify the line a = b to a = (int)b. This way, even if b had a value other than 3.0, like 3.2, we instruct the compiler to perform the conversion, setting a to 3.

An intriguing aspect of type casting involves converting between characters and numeric types.

Similar to previous cases, caution is necessary in setting up such conversions. Internally, a char does not store the character itself but rather its corresponding numeric value, such as 97 for lowercase 'a' and 65 for uppercase 'A'.

Consider the following example:

```c
int targetInt;
char sourceChar = 'a';
targetInt = (int)sourceChar;
```

Now, `targetInt` holds the value 97.

Conversely, when casting an int to a char, the process is reversed, and the char is set to the value corresponding to the int value. For instance:

```c
int sourceInt = 65;
char targetChar;
targetChar = (char)sourceInt;
```

In this case, `targetChar` is now 'A'.


### Currently in progress of writing...
