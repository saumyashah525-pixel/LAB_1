#include <stdio.h>
void main ()
{
    int Maths, Hindi, English, Science, Gujrati,Total;
    float Percentage;

    printf("Enter marks of Maths :");
    scanf("%d",&Maths);

    printf("Enter marks of Hindi :");
    scanf("%d",&Hindi);

    printf("Enter marks of English :");
    scanf("%d",&English);

    printf("Enter marks of Science :");
    scanf("%d",&Science);

    printf("Enter marks of Gujrati :");
    scanf("%d",&Gujrati);

    Total= Maths+Hindi+Science+Gujrati+English;
    printf("Your total marks is %d \n",Total);

    Percentage=(Total*100)/500;
    printf("Your percentage is %f",Percentage);

}