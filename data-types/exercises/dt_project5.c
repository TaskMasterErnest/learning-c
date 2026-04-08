// program that takes in years and displays it in terms of seconds

#include <stdio.h>

int main(void)
{
    float seconds_in_year = 3.157E7;
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age in seconds is %E\n", age * seconds_in_year);

    return 0;
}