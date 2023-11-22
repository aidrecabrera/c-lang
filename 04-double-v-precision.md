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