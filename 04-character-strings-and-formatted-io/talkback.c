// talkback -- nosy, informative program

#include <stdio.h>
#include <string.h> // from strlen() prototype
#define DENSITY 62.4 // human density in lbs per cu ft

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40]; //name is an array of 40 chars
    
    printf("Hello, what is your name: ");
    scanf("%s", name);
    printf("%s, how much do you weigh in pounds?\n", name);
    scanf("%f", &weight);

    // get the bytes in name
    size = sizeof name;
    // get the length of name
    letters = strlen(name);
    // calculate the volume
    volume = weight / DENSITY;

    printf("\nWell %s, your volume is %2.2f cubic feet\n", name, volume);
    printf("Also, your first name has %d letters in it.\n", letters);
    printf("... and we found %d bytes to store your name in.\n", size);

    return 0;

}