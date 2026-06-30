# Operators, Expressions and Statements

A powerful feature in programming is loops. Loops allow us to repeat actions that we have stated in a program.
> check out shoes1.c and shoes2.c programs

One of the powerful features that enable us to write loops is the `while` method. The while loop is initialized between a set of braces ({}) and this is called a `block`.

### Fundamental Operators
C uses operators to represent arithmetic operations. The operators that C provides are as follows, =,+,-,*,and /. There is not exponentiating operator. The math library provides the `pow()` function that is used for that purpose.

#### Assignment Operator: =
In C, this operator is not read as the "equal to" operator. It is an operator used to assign a value to a variable that has been declared.
The statement: `bmw = 2002` does not read as "bmw equals to 2002", it reads (from right to left) as "the value 2002 has been assigned to the variable bmw".

The item to the left of the = operator is called a `variable`, and the item to the right of the = operator is called the `value`.

In C, the 2002 is what we call an `rvalue`. The item to the left (variable) is more called in C as a `modifiable lvalue` to label the items/entities that you can assign values to. The variable also refers to the storage location of the value.

##### Data Objects, LValues, RValues and Operands
The work of an assignment statement is to store a value at a memory location. `Data object` is the general term used for a region of data storage that can be used to hold values.

One way to identify an object is by using the name of the variable. C uses the lvalue to mean any such name or expression that identifies a particular data object. `Object` refers to the actual data storage, but an `lvalue` is used to identify or locate that storage.

Then came the `const` modifier. This allows you to create an object but one whose value cannot be changed.

The `modifiable lvalue` is now called the `object locator value` according to standard terms.

The Rvalues refer to constants, variables or any other expressions that yields a value, such as a function call.

`Operands` are the items that flank most operators, and they are what operators operate upon.

> see the example code golf.c

The C assignment operator accepts triple assignments, something other languages will not do.

#### Addition Operator: +
The addition operator causes items at either sides of the operator to be added together.

Assuming we have an example `income = salary + bribes`. In this statement, the income, salary and bribes are modifiable lvalues because each of them identifies a data object that can be assigned a value. But the expression `salary + bribes` is an rvalue because it is a calculated value that is not identified with a particular memory location.

#### Subtraction Operator: -
This subraction operator causes the item after this operator to be subtracted from the item before this operator.


##### Sign Operators: - and +
These two signs can be used to change the algebraic sign of the value, the minus sign especially.

When it is used in this manner, the operator is called an `unary operator`. These operators usually need two operands before they can make sense (when performing arithmetic calculations), and in this state, they are called `binary operator`.

#### Multiplication Operator: *
Multiplication is done by the * operator. In this statement, `cm = 2.54 * inch;`, the inch value is multiplied with 2.54 and the resulting product is assigned to cm.

> Let is write a squaring function for the first 20 squares in the squares.c program.

##### Exponential Growth
There is a story of a scholar who requested a reward as such, he asked them to double the number of grains on a piece of chessboard. 
We will write some code to see how we can get that value an pair it agains the current world wheat crop production (785 million tonnes).
> check out the code in wheat.c

#### Division Operator: /
C uses the / sign for division. The value to the left of the sign is divided by the value to the right of the sign.

Diviion works differently for different data types, floats and integers. Floating-value divisions give a floating-point answer, and integer divisions give an integer answer. For the integer part, the fractional side is discarded via a process called `truncation`.

Types should and cannot be mixed but C is forgiving in the way it handles this.
> check the example code divide.c

The C11 standard uses the *truncation towards zero* when dealing with rounding up from a floating point to an integer.

#### Some Additional Operators
C has more than 40 operators but some are used more than the others. We will look at 4 more of these useful operators.

##### the sizeof Operator and the size_t Type
The `sizeof` operator returns the size, in bytes, of its operand. The operand in this case can be a specific data object, or a type.
> the code in sizeof.c shows how we can use the sizeof and the size_t type.

C has a mechanism called `typedef` that is used to create an alias for an existing type. eg. `typedef double real`, this makes *real* another name for *double*. Hence if we have `real deal`, this means that deal is not of the *double* type.

`size_t` is an implementation-defined unsigned integer type defined in the C11 standard (ISO/IEC 9899:2011) that is guaranteed to be large enough to represent the size in bytes of any possible object.

##### Modulus Operator: &
The modulus operator is used in integer arithmetic. What it does is to provide the remainder of the results when an integer to the left of the modulus symbol (&) is divided by the integer to the right of the symbol.
> the min_sec.c program shows how to use the & operator and also another way to use a while loop.

Note that, for the modulus of a negative number, the remainder is always a negative number.

#### Increment and Decrement Operators: ++ & --
The *increment operator* does one job, that is, to increase the value of an operand by 1. There are two ways by which this comes:
1. the *prefix* mode where the operator comes before the operand; ++value
2. the *postfix* mode where the operator comes after the operand; value++

These modes differ with regards to the precise time the increment happens. Simply put; in the prefix mode, the increment is done before the operation takes place, and for the postfix mode, the increment is done afterwards.
> see the programs: add_one.c
> rewriting the shoes2.c prgram in a compact form with increment operator

With what has been done in the `shoes2_compact.c` code, the assessment/increment is done before the condition is evaluated. This is perfect for a situation like this where you want it that way. The loop goes this way:
1. increment the shoe size
2. perform the test / evaluate the test
3. do the statements
4. return to beginning of the loop

An advantage of having the increment operator work in this manner is because, it produces slightly more efficient machine code.
> see the post_pre.c program for a feature of these operators

In the code the *a_post* has the value of a **before** a changed; the *pre_b* has the value of b **after** b changed. This represents the difference between the prefix form and the postfix form.

Look at these two pieces of code:
```C
// prefix
q = 2 * ++a; -> first, increment a by 1,/opt/ard/opt/arduino-ide/arduino-ideuino-ide/arduino-ide
                then, multiply a by 2 and assign to q.

// postfix
q = 2 * a++; -> first, multiply a by 2, assign to q,
                then, increment a by 1.
```

For each of the forms we have for the incrementing operator, we have same for the decrementing operator. Instead of ++, we use --.
> take a look at the bottles.c program


#### Expressions & Statements
An *expression* is a combination of operators and operands. The simplest expression is a constant or a variable without an operator eg *22* or *beebop*. The complex expression is eg *55 + 22* or *vap = 2 * (vip + (vup + 3))*.

A *statement* is a command to the computer. There are *simple statements* that terminate with a semicolon, and there are *compound or block statements* that are enclosed in braces.


#### Type Conversion
Statements and expressions should generally use variables and constants of one type but C does not halt when you make a mismatch of the types. Instead, it has a hierarchy that it follows when these types of things are encountered.

Here are the basic rules:
- for `char` and `short`, both `signed` and `unsigned` appearing in an expression, they are converted to an `int` (or `unsigned int`, if necessary).
- in any operations involving two types, both values are converted to the higher ranking of the two types.
- the ranking of types from highest to lowest is this: `long double` ==> `double` ==> `float` ==> `unsigned long long` ==> `long long` ==> `unsigned long` ==> `long` ==> `unsigned int` ==> `int`. An exception is made when long and int are of the same size, and in this case, unsigned int outranks long.
- in an assignment operation, the final result type is converted to the type of the variable that is being assigned a value. This process can result in a *promotion* (conversion to larger types) or a *demotion* (conversion to a lower-ranking type).
- when passed as function arguments, `char` and `short` are convered to `int`, and `float` is converted to `double`.

Promotion is almost always uneventful and smooth but demotion is not. Demotion may lead to inconsistencies in assignment operations where the result is type-dependent for accuracy. More accuracy is good but less is not, which we get when demotion takes place.
> take a look at the convert.c program for an implementation of these rules.

##### The Cast Operator
Automatic type conversions are useful but they should not be relied on for the type conversions needed. A user must be explicit if they want to do a type conversion, that will save them from the effects of demotions mostly.

The cast operator is used for this explicit type conversion. The general form of the cast operator is this:
```C
(type_to_cast_to) value
```
eg. mice = (int) 1.6 + (int) 1.7


#### Function with Arguments
> Let's check out the pound.c program

From the function, declaring an argument creates a variable called the *formal argument* or the *formal parameter*. In the code, the formal paramter is the int variable called *n*.

When the function is called, a value is passed to the formal parameter, and this value is called the *actual argument* or *actual parameter*. Like in the code, when we called `pound(times)`, the value of 5 is passed into the functions and that is what is evaluated.
- whay happens is that, the value ot *times* in the `main()` is copied over to the new variable *n* in `pound()`.

A *prototype* is a function declaration that describes a function's return values and its arguments.

One thing to note is that for every call of the function, the value is that is being assigned is converted to a int value before the function (pound) statement is run. There may be promotions and demotions depending on what you have.