#include <stdio.h>
void main ()
{
    int A,B,C;
    printf("Enter value of A :");
    scanf("%d",&A);

    printf("Enter value of B :");
    scanf("%d",&B);

    printf("\n Before swapping your A is %d and B is %d",A,B );

    C=A;
    A=B;
    B=C;

    printf("\n After swapping Your A is %d and B is %d",A,B);


}