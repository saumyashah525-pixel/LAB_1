#include <stdio.h>
int main ()
{
    int HR,MIN,SEC,TOTAL_SEC;
    printf("Enter value of Hours :");
    scanf("%d",&HR);
    printf("Enter value of Minutes :");
    scanf("%d",&MIN);
    printf("Enter value of Seconds :");
    scanf("%d",&SEC);

    TOTAL_SEC=(HR*60*60)+(MIN*60)+SEC;
    printf("Your Total time is %d",TOTAL_SEC);
}