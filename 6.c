#include <stdio.h>
void main ()
{
    int A,B;
    printf("Enter value of A :");
    scanf("%d",&A);

    printf("Enter value of B :");
    scanf("%d",&B);

    printf("\nBefore swapping Your A is %d and B is %d",A,B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("\nAfter swapping Your A is %d and B is %d",A,B);
}