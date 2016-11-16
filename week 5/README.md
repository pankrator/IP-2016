# IP-2016 Week 5 - Loops, Arrays (1-dimensional)

## Review

### Loops

Loops are another form of branches (control flow statements). Loops allow for the repeated execution
of certain code. They too come in various shapes and forms.

#### While

A `while` loop is the simplest kind of loop which iterates *while* its condition evaluates to true.

```C++
while (boolean_condition)
{
    // Code to be repeated while the boolean_condition holds
}
```

#### Do-while

A `do-while` loop resembles a `while` loop with the major exception that it will always be executed
at least once, whereas a `while` may be iterated zero times.

```C++
do
{
    // Code to be done immediately and repeated the boolean_condition holds
}
while (boolean_condition); // <-- don't forget the semicolon here
```

#### For-loop

A `for` loop is a shortcut to one really common variant of `while` - when one has to cycle
for some usually predermined numbers of steps:

```C++
for (initialization_expression; boolean_condition; update_expression)
{
    // Code to be repeated for the time boolean_condition is true
}
```

##### Example

```C++
for (int i = 0; i < maxIterationCount; ++i)
{
    // Code to be executed
}
// Is precicely identical to
int i = 0;
while (i < maxIterationCount)
{
    // Code to be repeated
    ++i;
}
```

Notes:

* Prefer `for` to `while` to `do-while` when possible
* The three parts of the `for` loop (`initialization_expression`, `boolean_condition`, `update_expression`)
are optional
* Be careful when writing your loops not to introduce a case in which the `boolean_condition`
never becomes `false`. If that happens your program will never quit - it will be stuck in an
*infinite loop*.

#### Loop helper-keywords

There are two keywords used in conjuction with loops that ease working with loops.

##### Break

Break is used to...well, break the loop. It allows you to make an early exit from any
loop and only breaks the innermost one in case you have nested loops.

```C++
// This loop detects if n is the second power of some number
for (int i = 0; i < n; ++i)
{
    if (n == i * i)
    {
        // No point in iterating further because our work here is done
        break;
    }
}
```

##### Continue

Continue is used to skip to the next iteration of a loop and just as break works
only on the innermost loop.

```C++
// This loop computes the second power of all odd numbers
for (int i = 0; i < n; ++i)
{
    if (i % 2 == 0)
    {
        // Skip even numbers; this skip the code below and start the next iteration
        continue;
    }
    std::cout << i * i << " ";
}
```

### Arrays

The **array** is such a **data structure** that stores a fixed number of elements of a certain type.
Indexing of the arrays starts from `0`(first element) and goes to `n-1`(last element) where `n` is the size of the array.

#### Declaration

```
type arrayName[arraySize];
```

where **type** is any valid C++ data type, **arraySize** is an integer constant greater than zero.

##### Example

```
double heights[10];
```

#### Initializing

```
double heights[6] = { 3.2, 1, 10, 100, 5.5, 6 };
```

the number of elements cannot be more than we specified in the square brackets `[6]`.

#### Access and modify elements

Print element of the array:
```
cout << heights[0];
```
this will print the first element of the array which is `3.2`.

Modify element of the array:
```
heights[5] = 10; // this will change the last element of the array from 6 -> 10
cout << heights[5];
```

## Exercises

### Task 1 - Queries

Write a program that takes an array of real numbers and and a sequence of real numbers
each element of which is called a *query*. The program must
output up to what index in the array we need to sum all numbers to get a result bigger
than each *query*. In other words, for each query `q` the program must find that `x`
for which `array[0] + array[1] + ... + array[x] >= q`.


**Input:**

The first line contains `N` meaning the size of the array.
The next `N` lines contain each element of the array.
Next line contains `M` - the number of queries to be made.
The next `M` lines contain each query.

**Output:**

The output contains `M` lines each denoting the index up to
which we have to sum the real numbers or `-1` if this is not possible.

Example:

Input
```
4
1
2
3
4
2
3
11
```

Output
```
1
-1
```

### Task 2 - Powerset

Given a set of numbers, computer its powerset i.e. the set of all of its subsets.
Use its [characteristic vector](https://en.wikipedia.org/wiki/Indicator_vector) to represent
each subset. To generate each vector it's enough to iterate from 0 to 2^n.
Finally, you need to use bitmasks to check if an element is contained within the subset.

**Input:**

The first line contains the size of the set `N`. `N` will always be between 1 and 64.
The next line contains exactly `N` numbers - the elements of the set.

**Output:**

You are to output all subsets of the set, each on a new line, separating the numbers in each
subset with a single space. Print an empty line for the empty set.

**Example:**

Input

```
3
1 2 3
```

Output
```

1
2
3
1 2
1 3
2 3
1 2 3
```

### Task 3 - Print a Christmas tree

Your task is to print a Christmas tree on the console like the following

```
     *
    ***
   *****
  *******
 *********
***********
    ***
    ***
```

Your program should accept a single number read from the standard input which is tree's height.
Each tree uses 3-star wide, 2-row high trunk.
The tree above has a height of 8 rows.

**Input**

A single number `n` - the tree's height. `n` is in the range [5; 100].

**Output**

A tree with a height of `n` rows, the bottomost of which is the tree's trunk.

**Example**

Input

```
5
```

Output

```
  *
 ***
*****
 ***
 ***
```

### Task 4 - Palindrome, revisited

Given a positive 64-bit integer, tell whether it's a palindrome.

**Input**

A single number `n` in the range [0; 2^64 - 1]

**Output**

`Yes` if `n` is a palindrome, `No` otherwise

**Example**

Input
```
123454231
```

Output
```
Yes
```



### Task 4 - Palindrome, return of the bits

Given a positive 64-bit integer, tell whether it's a palindrome in **base 2**.

**Input**

A single number `n` in the range [0; 2^64 - 1]

**Output**

`Yes` if `n` is a palindrome in base 2, `No` otherwise

**Example**

Input
```
‭7335‬
```

Output
```
Yes
```

Explanation: 7335 is 1110010100111 in binary. Since 1110010100111 is a palindrome, the program outputs `Yes`.

### Task 5 - Palindrome, the numbers strike back

This time instead of recognizing whether a number is palindrome,
your task is to generate all palindromes in base 10 in the range [0, `n`].

**Input**

A single number `n` that defines the range [0, `n`]

**Output**

All palindromes in base 10 in the range [0, `n`].

**Example**

Input

```
120
```

Output

```
1
2
3
4
5
6
7
8
9
11
22
33
44
55
66
77
88
99
101
111
```

### Task 6 - Unique number

You'll be given a list of numbers, all but one of which are repeated at least once.
This means that exactly one number does not repeat. Your task is to find it.

**Input**

On the first line of the standard input, the number of numbers `n` will be entered.
On the next line, exactly `n` numbers will be given such that all but on are repeated at least once.

**Output**

The one and only unique number.

**Example**

Input
```
11
1 1 2 2 3 3 4 4 5 5 6
```

```
Output
6
```
