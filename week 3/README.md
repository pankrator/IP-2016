# IP-2016 Week 3 - Conditional operators, Enumarated types

## Conditional operators

Condition ? X : Y

If Condition is true ? then it returns value X : otherwise value Y

## If statements

```C++
if (boolean_expression)
{
  ...
  //What to do
  ...
}
```

```C++
if (boolean_expression)
{
  ...
  //What to do if boolean_expression is *true*
  ...
} else {
  //What to do if boolean_expression is *false*
}
```

```C++
if (boolean_expression)
{
  ...
  //What to do if boolean_expression is *true*
  ...
} else if (other_boolean_expression) {
  //What to do if other_boolean_expression is *false*
} else {
  //What to do in every other case
}
```

## Enum types

```
enum enum-name { list of names } var-list;
```

Example:

By default, the value of the first name is 0,
the second name has the value 1, the third has the value 2, and so on.
But you can give a name a specific value by adding an initializer.
For example, in the following enumeration, green will have the value 5.


```
enum color { red, green=5, blue };
```

Here, **blue** will have a value of 6 because each name will be one greater than the one that precedes it.

Examples:

```
#include <iostream>

int main()
{
  enum weekDay { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

  weekDay day = Monday; // One way of initialization
  weekDay friday = (weekDay)5; // Initialize by type casting integer 5 to weekDay type.

  std::cout<<day<<std::endl; // This will print 1, because Monday has an integer value of 1

  return 0;
}
```

How to use enum with input from console:

```
#include <iostream>

int main()
{
  enum weekDay { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

  weekDay friday;
  
  int dayInput;
  std::cin>>dayInput;
  friday = weekDay(dayInput); // Here we set the value of friday to be our input

  std::cout<<friday<<std::endl;

  return 0;
}
```

To use the above program enter in the console an integer value.

## Switch statement

A switch statement allows a variable to be tested for equality against a list of values.

```C++
switch(expression){
    case constant-expression  :
       statement(s);
       break; //optional
    case constant-expression  :
       statement(s);
       break; //optional
  
    // you can have any number of case statements.
    default : //Optional
       statement(s);
}
```

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

Write a program with variable of enum type to hold day of week. Print appropriate text according which day of week it is.

Input:
```
1
```

Output:
```
Monday
```

So on...


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

Write a calculator program. It should support following operations: `+`, `-`, `*`, `/`, and `%`.

Input:
```
Sign: -
5 5
```

Output:
```
0
```

Input:
```
Sign: /
5 1
```

Output:
```
5
```

Consider what should happen if someone types 0 as second operand for deletion operation.

### Task 9

Write a program which takes a number as input and prints it in letters representation.

Input:
```
37
```

Output:
```
thirty seven
```
