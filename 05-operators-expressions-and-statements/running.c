// running.c -- a useful program for runners

#include <stdio.h>

const int S_PER_M = 60; // seconds per minute
const int S_PER_H = 3600; // seconds per hour
const float M_PER_K = 0.62137; // miles per kilometre

int main(void)
{
    double distk, distm; // distance run in miles, and kilometres
    double rate; // average speed in miles per hour
    int min, sec; // minutes and seconds of running time
    int time; // running time in seconds only
    double mtime; // time in seconds for one mile
    int mmin, msec; // minutes and seconds for one mile

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile, and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometres, the distance run.\n");
    scanf("%lf", &distk); // %Lf for type double
    printf("Next, enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now, enter the seconds.\n");
    scanf("%d", &sec);

    // converts time to pure seconds
    time = (S_PER_M * min) + sec;
    
    // converts kilometres to miles
    distm = M_PER_K * distk;

    // rate in mph (miles per sec X sec per hour)
    rate = (distm / time) * S_PER_H;

    // time / distance = time per mile
    mtime = (double) time / distm;
    mmin = (int) mtime / S_PER_M; // whole minutes
    msec = (int) mtime % S_PER_M; // remaining seconds

    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, %d sec.\n", mmin, msec);
    printf("Your average speed was %1.2f mph.\n", rate);

    return 0;

}