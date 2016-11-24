# IP-2016 Functions

Every C++ program has at least one function, which is the `main()`. You can divide up your code into separate functions. How you divide your code in different functions is up to you, but normally it should be so that each function performs a specific task.

### Declaration

Each function in C++ has  **return type**, **name** and list of **parameters**.
* **return type** can be any C++ built-in data type, user-defined type, or **void**. **void** means that this function doesn't return a value.
* **name** is like any variable name (excluding ofcourse the keywords).
* **parameters** are a comma-separated list of "variables" each declared with their own data type.

```
<return type> <name>(<comma-separated list of parameters>);
```

### Definition 

A function definition is the actual body of the function.

Example:
```
double sum(double a, double b)
{
    // Body of the function
    // Your code goes here...
    return a + b;    
}
```

As you can see in the above example we defined a function that sums up two numbers.
This function is of type `double` and it must have `return` statement.

Consider the following example:

```
double sum(double a, double b)
{
    if (a > 0 && b > 0)
    {
        return a + b;
    }
}
```

The above example will produce an error, because not every routine of execution of this function will end up in the return statement.
In this case if you call the function with negative parameters its not determined what it will do.
It is important that each possible branch of execution of the function has a return statement;

### Call a function

If you have the following function:
```
void printFriday()
{
    cout << "Hooray! It's Friday." << endl;
}
```

because this function is of type `void` it doesn't need to have a return statement.
How to call this function:
```
// function definition is here

int main()
{
    // Some code here...

    printFriday();

    return 0;
}
```

Example with parameters:

```
double sum(double a, double b)
{
    // Body of the function
    // Your code goes here...
    return a + b;    
}

int main()
{
    double number1, number2;
    double result = sum(number1, number2);

    cout << result << endl;

    return 0;
}
```

### Default values for parameters in functions

Example:
```
double sum(double a, double b = 5)
{
    return a + b;
}
```

In the above example, we have set a default value for `b = 5`.
There are two different ways to call this function:
* Only first parameter assigned. `sum(0)` result will be 5.
* Two parameters are set. `sum(5, 5)` result will be 10.

Usually parameters with default values are at the end of the parameters' list.

### Parameters speicifcs

**Parameter's value is copied by default!**

Example:
```
double sqr(double value)
{
    value = value * value;
    return value;
}

int main()
{
    double value = 10;
    sqr(value);
    cout << value << endl;
}
```

The above code will print out `10` because the variable `value` in the main function is copied to
the parameter variable `value` when the function is called and they are actually two different variables. 

### Others

You can also stop the execution of a function in advance, for example:

```
void printProgramForDay(int dayNumber)
{
    if (dayNumber > 5)
    {
        return;
    }

    cout << "Print a day specific program" << endl;
}
```

In the above example you stop the execution of the function prematurely because, there is nothing to print for weekend days.
Alternatively you can rewrite the function as follows:

```
void printProgramForDay(int dayNumber)
{
    if (dayNumber >= 0 && dayNumber <= 5)
    {
        cout << "Print a day specific program" << endl;
    }
}
```
