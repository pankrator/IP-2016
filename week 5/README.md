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


