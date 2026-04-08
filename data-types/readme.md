### the char type
The char type is used to store stuff like punctuations and letters of all alphabets.
The char is stored as value integers that range from 0 to 127.
The char range of values is small enough for them to be stored by a 7-bit storage.
The char type is stored on a computer as numeric values.

To store a character constant, you need to put those in single quotes.
An example is this: char grade = 'A'.
This is better, and works on any system than trying to use the code value for A which is 65.

So far, the C language treats character constants as type int instead of char.
An example, on a system where a 32-bit int and an 8-bit char, the code is: char grade = 'B';
B is stored as 66 in a 32-bit unit, while grade ends up 66 stored in an 8-bit unit.

There are characters that are non-printing. 
What this means is that, when they are written, they do not print out a value but they perform an action.
To make sure these characters do what they can do, they are preceded by escape sequences.

Since every character has a code value, the %c format specifier is used to print the character itself.
see `charcode.c` program.

### the _bool type
The `_Bool` type is used by C is really an integer type.
The bool type is originally reserved for the True or False; 0 for false and 1 is for true.
This type only requires only 1 bit of memory and this is enough to cover the bits for the bool type.

### portable types: stdint.h and inttypes.h
-- I will cover this later.

### types float, double and long double
These integer types are already known. They are used to represent very large and very small numbers.
Most of these are used in scientific notation.
The `e-notation` is used by both computers and scientists which follows a number with an `e` that denotes the power of 10.

when declaring floating points, you can use the `e` or `E`.
There are some rules with how to represent floating points:
- you can do without the decimal or the exponential part, but not both.
- you can omit a fractional part or a number part, but not both.
- do not use spaces in a floating point constant.

When it comes to printing floating types:
- the basic format specifier to use is %f; this prints both float and double types.
- for getting exponential values of the float/double type, use either %e or %E.
- for a hexadecimal format, use either %a or %A.
- to print the long double type, use %L with any of the above.

Note: The compiler assumes that the floating-point constants are double precision.
Take this statement: `some = 4.0 * 2.0`.
What happens is that, both values are stored as double. The product is calculated using double precision arithmetic and then the answer is trimmed down to regular float size.
This ensures greater precision when calculating but can slow the program down.
C enables us to override this default by using f or F as a suffix to the float numbers so that the compiler will treat them as such.


> To check the size your computer assigns to the types, check the `typsesize.c` program.

Occasionally, you may encounter an issue with the the `printf()` function not working as it should.
The role of the `printf()` function is to send output from an immediate storage area called the `buffer` to the screen.
This act is called *flushing the buffer*
In the case where the buffer is not being flushed, you can do the following:
- use the `\n` newline character to force a buffer flush.
- use the `fflush()` function. (more on this later).