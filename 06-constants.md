## Constants

While variable values in a program are typically subject to change, certain scenarios demand that a variable's value remains constant throughout execution.

This is where constants play a crucial role. These specialized types prohibit any alterations once the value is established during declaration.

Any fundamental data type in C, as discussed earlier, can be declared as a constant by prefixing the keyword `const` before the type. Consequently, our conventional template of `type variable_name` transforms into `const type variable_name`.

Adhering to a best practice, it is recommended to employ all uppercase letters when declaring a constant:

```c
const int DAYSINWEEK = 7;
