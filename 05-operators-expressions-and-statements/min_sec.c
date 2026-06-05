// converts seconds to minutes and seconds
#include <stdio.h>
#define SECS_PER_MIN 60

int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds.\n");
    printf("Enter the number of seconds: (<= 0 to quit): ");
    scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / SECS_PER_MIN;
        left = sec % SECS_PER_MIN;

        printf("%d seconds is %d minute(s), %d second(s)\n", sec, min, left);

        printf("Enter next value (<= 0 to quit): ");
        scanf("%d", &sec);
    }

    printf("Done!\n");

    return 0;
}