# IP-2016
Introduction to programming materials

## Bitwise operations on numbers

Try the following programs in C++.


```
#include <iostream>

int main() {
    int a = 0b0011;
    int b = 0b1111;
    int c = a & b;
	std::cout<<c;
}
```

```
#include <iostream>

int main() {
    int a = 0b0011;
    int b = 0b1111;
    int c = a | b;
	std::cout<<c;
}
```

Can you realize what these operations do?


## Data types

***short***

***int***

***long***

***long long***

***float***

***double***

***char***

use ```sizeof(type)``` to check size in bytes for each data type.

## Read input from console

```
cin>>variable_name;
```

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

Write a program which takes 3-digit number and outputs every digit on new line.

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
Implement the program with no additional variables.

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
