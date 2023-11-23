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