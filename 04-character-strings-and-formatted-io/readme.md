### Character Strings and Formatted Input/Output
This chapter will cover strings, input and output and the C preprocessor.

The most common input/output functions in C are the `printf` and `scanf` functions. With these, the programmer can interact with the code users and format data in the exact way they want it.

With the C preprocessor, we will gain insights on how to define constants and use symbolic constants.

Looking at the the program `talkback.c`, we can see the following:
- it uses an array to hold a character string, in this case, 40 consecutive bytes in memory to hold the single character value.
- it uses the %s conversion specification to handle the input and output of the string. Note that `name` is a char and does not use the memory address denoter (&) when used with `scanf`. But it is known as an `address`.
- uses the preprocessor to define the symbolic constant DENSITY to have a value of 62.4.
- it uses the C function `strlen()` to find the length of the string.

#### Character Strings
A character string can be defined as string of one or more characters. An example of a char string is "Ze boy is doing very well.".

There is no special variable type used for strings. Strings are stored in an array of type `char`. What this means is that, every character in the string is stored in adjacent memory cells.

The string always ends with a `\0` character. This character is not a `zero(0)`, but an ASCII code value that represents 0. This character is called the `null` character and this is what is used to terminate a string.

An array can be defined as a ordered sequence of elements of the same data type. This is denoted in the program by the bracket.
The `char name[40]` means that there are 40 elements of the same type `char` in the `name` array.

#### Strings
We cannot begin to construct a common character string from scratch on our own so we have the computer do it. This way, the computer takes care of adding the terminating null character at the end.

The `scanf` function does this perfectly. It reads a character string that has been enclosed in double quotes and knows that it is the string to be rendered and performs the functions necessary.

The caveat of using `scanf` is that; when it is reading a series of letters that have a whitespace between them, it concludes that the part read is the only string that needs to be rendered. It stops scanning for more letters/characters.

`scanf` was designed to only read a single word, not a whole phrase. For handling general strings, C uses other functions such as `fgets()`.


#### The strlen() Function
We already know that the `sizeof` operator, which gives the things in bytes. The `strlen()` function gives the length of the string in characters. It takes one byte to hold one character but the results do not show the exact length when the strlen() is used to print the length.

Most of the string-related functions are found in the `string.h`. The strlen() function gives the exact number of characters in the string. The sizeof function gives you a number larger because it also counts  the invisible null character used to string the string.


#### Constants and the C Preprocessor
We can put constants in the code so that we will not have to receive some values whose values do not change.
For this, we use symbolic constants. These constants will be the ones we will modify is we need to modify the constants in the code.

One way we can set up a symbolic constant will be to declare a variable and then set it equal to the desired constant.
```C
#define TAXRATE 0.015
```
A better idea, as offered by the C preprocessor, is to use the `#define` directive. PS. The preprocessor also uses the `#include` directive to include information from another file.

When the program is compiled, the constant is substituted ever
    scanf("%s", name);
    printf("%s, how much do you weigh in pounds?\n", name);ywhere that the definition was used. This is called the *compile-time subsitution*.
These kinds of define constants are termed *manifest constants*.

The general form of defining these constants is:
```C
#define NAME value
```
Where the NAME has to always be capitalized-this is a convention in C. Other lesser known conventions in specifying constants are prefixing a name with `c_` or `k_` to produce such `c_level` or `k_line`.

#### The const Modifier
Aside using the #define keyword, there is another way to define the constants in the code. This is by using the `const` keyword.
This way is more flexible than using the `define` keyword.
An example of the way to use this is:
```C
const int MONTHS = 12;
```
This makes the value MONTHS into a read-only value. This way, we can display the value MONTHS and use it in calculations.
This also is flexible such that it lets you declare a type, and it controls which parts of the program can use the constant.

There is a third way to declare symbolic constants, and that is by using the `enum` keyword.


#### The return value of printf()
When printf finishes working on printing, it sends back a return value that is used to validate whether the output matches what was intended to come out.

This return value is not used when it comes to printing to screen, it is mostly used when writing the output to a file to check the output errors.


#### Using scanf()
There are two rules to follow when working with scanf()
- if you use scanf() to read the value of one of the basic data types, precede the variable name with a &
- if you use scanf() to read a string into a character array, do not use &

    scanf("%s", name);
    printf("%s, how much do you weigh in pounds?\n", name);
see `input.c` code


#### using the * modifier with printf and scanf
Using the * modifier in the printf() function and the scanf() function produce two different results.
Look at the examples, varwid.c and skiptwo.c programs.

For the skiptwo program, the skipping is useful when you have to read data from a file that has the data arranged in uniform columns.