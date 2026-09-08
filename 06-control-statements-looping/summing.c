// summing.c -- sums integers entered iteratively

#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L; // initialize to zero
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit): ");
    status = scanf("%ld", &num);

    while (status == 1)
    {
        sum = sum + num;
        printf("Enter the next integer (q to quit): ");
        status = scanf("%ld", &num); // the return value of scanf. >= 0 when it returns what it is supposed to; < 1 when not.
    }

    printf("These integers sum up to: %ld.\n", sum);
    return 0;
}