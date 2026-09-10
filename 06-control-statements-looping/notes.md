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

The while statement is a cycle of test and execution until the statement been tested becomes false.
- A loop terminates when the test statement it is working with moves from true to false. Another way is to use a `break` or an `if` statement.
- The test condition being evaluated is what determines whether a the execution loop will continue or be terminated.
- For most while statements, they come with a conditional statement. The conditional is an expression called the `entry condition`. The entry condition must be met before the statement(s) in the body of the loop are executed. If not, there will be no execution.
- When using the while loop, syntatically, the statements to be executed in the loop must follow the entry condition. If they are a bunch of statements, then they must be put in braces. If not done so, the statements will execute in a way this is not desired.
```C
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n < 3>)                      // entry condition
        printf("n is %d\n", n);         // only this statement will be executed in the loop
        n++;                            // this will never get executed because the loop statement ended above it, this was not included
    printf("That is all this program does.\n")
f
    return 0;
}
```

Relational operators are used in forming relational expressions. These relational expressions are used in loops.
- the relational expressions used in loops have the value of either 1 or 0; where 1 is true and 0 is false.
- C is tolerant of the values that it regards as either true or false; see `truth.c`. All non-zero values are regarded as true (with a gotcha that bites; see `trouble.c`), and 0 is false.
- the `fabs()` function from the `math.h` header file comes in handy when performing tests with floating-point numbers. See `cmpflt.c`.

The new `_Bool` is the name for the Boolean variable. A `_Bool` variable can either have a value of 1 (true) or 0 (false).
- since C considers any nonzero value to be true, so if is assigned to a _Bool variable, it is set to 1.

The `for` statement uses three(3) control expressions to control looping. 
- The `initialize` statement is first executed before any other expression/statement in the loop is run. 
- The `test` statement is evaluated, and if it is a nonzero value, the statement is run once. 
- The `update` statement is then evaluated after the statement loop is run, and then back to the `test` evaluation again.
- The `for` statement is an `entry-condition` loop, and the decision to run through the loop is made before the loop is traversed. Sometimes the loop is not even traversed at all. The statements in the loop can be either be simple statements or compouns statements.
- The form in which the `for` loop statement is ran is:
```C
for (initialize; test; update)
    statement

// note that the for loop does not use braces
```
- see the programs; `sweetie2.c`, `for_cube.c`, `for_show.c`