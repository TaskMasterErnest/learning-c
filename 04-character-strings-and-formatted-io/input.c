// when to use the & with scanf

#include <stdio.h>

int main(void) 
{
    int age; // variable
    float assets; // variable
    char pet[30];  // string

    printf("Enter your age, assets and favourite pet's name:\n ");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d, $%f, %s\n", age, assets, pet);

    return 0;
}