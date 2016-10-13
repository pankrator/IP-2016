# IP-2016 Week 3 - Conditional operators, Enumarated types

## Conditional operators

Condition ? X : Y

If Condition is true ? then it returns value X : otherwise value Y

## Enum types

```enum enum-name { list of names } var-list;```

Example:

By default, the value of the first name is 0,
the second name has the value 1, the third has the value 2, and so on.
But you can give a name a specific value by adding an initializer.
For example, in the following enumeration, green will have the value 5.


```enum color { red, green=5, blue };```

Here, **blue** will have a value of 6 because each name will be one greater than the one that precedes it.

## The #define Preprocessor:

```#define identifier value```

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
