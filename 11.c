#include <stdio.h>
int main()
{
    int Total_Sec,HR,Min,Sec;
    printf("Enter Your Total Seconds : ");
    scanf("%d",&Total_Sec);

    HR=(Total_Sec/3600);
    Min=(Total_Sec%3600)/60;
    Sec=Total_Sec%60;
    printf("YOUR TIME IS %d HOUR %d MIN %d SECONDS",HR,Min,Sec);

}