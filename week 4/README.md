# IP-2016 Week 4 - Exercises with bitwise operations

In the following examples we'll consider ```number``` to be the variable we will manipulate.

### How to get the n-th bit of a number if you consider counting from 1

```
int mask = 0b1; // or int mask = 1;
mask = mask << (n - 1);
int result = number & mask;
std::cout << result << std::endl;
```


### How to set the n-th bit of a number if you consider counting from 1

```
int mask = 0b1; // or int mask = 1;
mask = mask << (n - 1);
number = number | mask;
```

### How to check if number is even with bitwise operation

```
bool isEven = (number & 1 == 0);
```

### How to get the first n bits of a number

```
int mask = 0b1;
int n;
mask = (mask << n) - 1;
int result = number & mask;
```

**Note**: In the above example after line 3 if n = 3 our mask will be `0b0111`.

### How to check if number is power of 2 using bitwise operations

```
(number & (number - 1)) == 0
```
