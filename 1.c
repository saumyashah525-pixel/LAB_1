#include <stdio.h>
int main ()
{
    int p,r,t,intrest;
    printf("Enter value of p:");
    scanf("%d",&p);

    printf("Enter value of r:");
    scanf("%d",&r);

    printf("Enter value of t:");
    scanf("%d",&t);

    intrest=p*r*t;

    printf("Your Intrest is : %d",intrest);
    return 0;
}