#include <stdio.h>
int main ()
{
    int base,height;
    float area;
    printf("Enter your triangle base and height:");
    scanf("%d %d",&base,&height);

    area = (0.5)*(base*height);
    printf("Your triangle's area is : %f",area);
}