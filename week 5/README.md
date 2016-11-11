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

For Example

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

Notes:

* Prefer `for` to `while` to `do-while` when possible
* The three parts of the `for` loop (`initialization_expression`, `boolean_condition`, `update_expression`)
are optional
* Be careful when writing your loops not to introduce a case in which the `boolean_condition`
never becomes `false`. If that happens your program will never quit - it will be stuck in an
*infinite loop*.

### Arrays

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

### Task 2 - WTF Cypher

