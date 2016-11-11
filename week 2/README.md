# IP-2016 Week 2 - Data types, bitwise operations, conditional operators

## Review

Bitwise operations are operations that... work directly on bits
(who would've guessed!). C++ defines 6 bitwise operators

| Name                | Syntax   | Effect                                        | Example                     |
| ------------------- | -------- | --------------------------------------------- | --------------------------- |
| Bitwise AND         | `a & b`  | Applies the boolean AND on each pair of bits  | `0b1101 & 0b0101 == 0b0101` |
| Bitwise OR          | `a | b`  | Applies the boolean OR on each pair of bits   | `0b1101 | 0b0101 == 0b1101` |
| Bitwise NOT         | `~a`     | Inverts each bit in the operand               | `~0b1101 == 0b0010`         |
| Bitwise XOR         | `a ^ b ` | Applies the boolean XOR on each pair of bits  | `0b1101 ^ 0b0101 == 0b1010` |
| Bitwise left shift  | `a << b` | Shifts `b` times the bits of `a` to the left  | `(0b1101 << 2) == 0b0100`   |
| Bitwise right shift | `a >> b` | Shifts `b` times the bits of `a` to the right | `(0b1101 >> 2) == 0b0011`   |

Some important properties follow. Bitwise operators:

* Are *blazingly* fast
* Allow you to store boolean values in a single bit instead of a whole byte

## Bitwise operations on numbers

Try the following programs in C++.


```
#include <iostream>
using namespace std;
int main() {
    int a = 0b0011;
    int b = 0b1111;
    int c = a & b;
    cout << c;
}
```

```
#include <iostream>
using namespace std;
int main() {
    int a = 0b0011;
    int b = 0b1111;
    int c = a | b;
    cout << c;
}
```

```
#include <iostream>
using namespace std;
int main() {
    int a = 0b0011;
    int b = 0b1111;
    int c = a ^ b;
    cout << c;
}
```

Can you explain what each program does?

***Note***: Try with different values for `a` and `b`


## Data types

* `short`
* `int`
* `long`
* `long long`
* `float`
* `double`
* `char`
* `unsigned` + any of the integral types above
* `bool`

use ```sizeof(type)``` to check the size in bytes for each data type.

## Declaration vs Initialization

```
// Local variable declaration:
int a, b;
int c;

// Initialization
a = 10;
b = 20;
c = a + b;

// Definition (declaration + initialization)
int a = 10;
...
```

## Read input from console

```cpp
using namespace std;
...
int myNumber;
cin >> myNumber;
```

## Scope of variables

A scope is a region of the program and broadly speaking there are three places, where variables can be declared:

* Inside a function or a block. These variables are called local variables.

* In the definition of function. These variables are called arguments / formal parameters.

* Outside of all functions (outside the main function). These variables are called global variables.

## Exercises

### Task 1

Write a program which takes as input two numbers from console and outputs their sum.

Input:
```
5
-3
```

Output:
```
2
```

### Task 2

Write a program which outputs the square of a number.

Input:
```
5
```

Output:
```
25
```

### Task 3

Write a program which takes a 3-digit number and outputs every digit on new line.

Input:
```
324
```

Output:
```
3
2
4
```

### Task 4

Write a program which swaps two numbers' values.

**Optional**: Implement the program with no additional variables.

Input
```
a=10
b=5
```

Output
```
a=5
b=10
```

### Task 5

Write a program which prints the bigger of two numbers.

Input:
```
5
7
```

Output:
```
7
```

### Task 6

Write a program which outputs whether a number is even.

Input:
```
2
```

Output:
```
yes
```

Input:
```
5
```

Output:
```
no
```

### Task 7

Print out whether three sides of a triangle really compose a triangle.

Input:
```
3
4
5
```

Output:
```
yes
```


Input:
```
5
3
8
```

Output:
```
no
```

### Task 8*

Write a program which takes a 4-digit number as input and outputs whether it is a palindrome.
A palindrome is a number that remains the same when its digits are reversed.

Input:
```
2332
```

Output:
```
yes
```

Input:
```
4212
```

Output:
```
no
```
