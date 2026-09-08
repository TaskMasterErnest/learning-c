# Control Statements - Looping

A good programming language should have the three forms of program flow namely:
- executing a sequence of statements
- repeating a sequence of statements until a certain condition is met (looping)
- using a test to decide between alternative sequences (branching)

Taking a look at the `while` loop and using the return value of `scanf()`, we can look at this piece of code in `summing.c`.

With the C-style of reading loops, we could transform that statment:
```C
status = scanf("%ld", &num);
while (status == 1)
{
    // loop statement
}
```

into

```C
while (scanf("%ld", &num) == 1)
{
    // loop statement
}
```

