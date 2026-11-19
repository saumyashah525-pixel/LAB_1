#include <stdio.h>
int main()
{
    int M,P,C,E,CM;
    printf("Enter Your Mathmatics marks :");
    scanf("%d",&M);
    printf("Enter Your Physics marks :");
    scanf("%d",&P);
    printf("Enter Your Chemistry marks :");
    scanf("%d",&C);
    printf("Enter Your Entrance Examination marks :");
    scanf("%d",&E);

    CM=(M/2)+(P/2)+(C/2)+E;
    printf("Your Cut Off Marks is : %d ",CM);
}