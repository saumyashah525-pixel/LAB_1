#include <stdio.h>
int main ()
{
    int seconds;
    seconds=31558150;

    float days , hours, minutes;
    days = (float)seconds/(24*60*60);
    hours =days*24;
    minutes=hours*60;
    printf("Your days is %f\n",days);
    printf("Your hours is %f\n",hours);
    printf("Your minutes is %f",minutes);
}