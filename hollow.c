#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}