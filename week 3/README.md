# IP-2016 Week 3 - Branches, enumerated types

## Review

Branches are statements that let control the flow of the program
(which is why they are also called *control flow statements*).
Branches come in different flavours...

## If statements

In its simplest form, an if statement looks like this:

```C++
if (boolean_expression)
{
    // Code
}
```

but it can be extended to:

```C++
if (boolean_expression)
{
    // Code to execute if boolean_expression is true
}
else if (another_boolean_expression)
{
    // Code to execute if boolean_expression was false but another_boolean_expression is true
}
else
{
    // Code to execute if none of the above checks succeeds.
}
```

Note that there might be as many `else if` as you need and the `else` thingy is optional too.

### Switch statements

Syntax goes like this:

```C++
int value;
switch (value)
{
case constant_value_1:
    // Code to execute if value == constant_value_1
    break;
case constant_value_2:
    // Code to execute if value == constant_value_2
    break;
...
default:
    // Code to execute if value does not equal any of the values above
    break;
};
```

Some important notes:

* Each case must be a constant and `value` must be an integral type (that is,
`int`, `long`, `short`, `char`, `bool` or any of their unsigned counterparts).
* The `default` clause is optional but it is recommended to always have it to
prevent errors
* The `break` keywords serve to separate cases. They are optional and their
lack will cause the execution of the next case.

Example:

```C++
#include <iostream>

int main ()
{
   // local variable declaration:
   char grade = 'D';

   switch(grade)
   {
   case 'A' :
      std::cout << "Excellent!" << std::endl;
      break;
   case 'B' :
   case 'C' :
      std::cout << "Well done" << std::endl;
      break;
   case 'D' :
      std::cout << "You passed" << std::endl;
      break;
   case 'F' :
      std::cout << "Better try again" << std::endl;
      break;
   default :
      std::cout << "Invalid grade" << std::endl;
   }
   std::cout << "Your grade is " << grade << std::endl;

   return 0;
}
```

## Conditional operators

The conditional operator is the only operator that takes not 1, not 2 but 3 operands!
```C++
int finalValue = boolean_expression ? possible_value : another_possible_value;
// The code above is equivalent to
if (boolean_expression)
{
    finalValue = possible_value;
}
else
{
    finalValue = another_possible_value;
}
```

## Enum types

Enumerations (enums for short) allow you to restrict the integers
to some finite set of predefined values with special meaning. Note
that by defining an enum, you are creating a entirely new type.

```
enum EnumName
{
    Value1,
    Value2,
    ...
};
```

Example:

By default, the `Value1` has value 0, `Value2` has the value 1, and so on.
However, you can give each name a specific value by adding an initializer.
For example, in the following enumeration, green will have the value 5.


```
enum Color { Red, Green = 5, Blue };
```

Here, `Blue` will have a value of 6 because each name will be one
greater than the name preceding it.

Examples:

```
#include <iostream>

int main()
{
    enum WeekDay { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

    WeekDay day = Monday; // One way of initialization
    WeekDay friday = (weekDay)5; // Initialize by type casting integer 5 to weekDay type.

    std::cout << day << std::endl; // This will print 1, because Monday has an integer value of 1

    return 0;
}
```

To use enums with input from console:

```
#include <iostream>

int main()
{
    enum WeekDay { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

    WeekDay friday;

    // Option 1
    int dayInput;
    std::cin >> dayInput;
    friday = WeekDay(dayInput); // Set the value of friday to be our input

    // Option 2
    std::cin >> (int&) friday;

    std::cout << friday << std::endl;

    return 0;
}
```

To use the above program enter in the console an integer value.

## Exercise

### Task 1

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

### Task 2

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

### Task 3

Print out whether there exists a triangle whose sides are as long as the given numbers.

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

### Task 4*

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

### Task 5

Write a program with variable of enum type to hold a day of the week.
Print appropriate text according which day of week it is.

Input:
```
1
```

Output:
```
Monday
```

And so on...


### Task 6

Write a program which solves linear and quadratic equations.

* ax + b = 0
* ax^2 + bx + c = 0

Input:
```
3 5 0
```

Output:
```
-1.67
```

Input:
```
1 -5 6
```

Output:
```
3 2
```

### Task 7

Write a program which decides whether a number is in interval.
It should print `a=` then `b=` and wait for input from console.

Input:
```
a=5
b=10
number=11
```

Output:
```
11 does not belong to [5, 10]
```

Input:
```
a=5
b=10
number=7
```

Output:
```
7 does belong to [5, 10]
```

### Task 8

Write a calculator program. It should support the following operations: `+`, `-`, `*`, `/`, and `%`.

Input:
```
Op: -
5 5
```

Output:
```
0
```

Input:
```
Op: /
5 1
```

Output:
```
5
```

Consider what should happen if someone types 0 as second operand for deletion operation.

Try to rewrite your program so that it can accept input in the format `5 - 5`.

### Task 9

Write a program which takes a number in the interval [0, 1000] as input and prints its name.

Input:
```
37
```

Output:
```
thirty seven
```

### Task 10

Write a program which takes a number in the interval [0, 1000] and print its roman numeral.

Input:
```
37
```

Output:
```
XXXVII
```
