//wap which will take a num as a input from the user and print fabonacci series till the count of that number
#include<stdio.h>
void main()
{
    int f,s,curr,i,n;
    printf("Enter the total numbers of fabonacci series till the count of that number =");
    scanf("%d",&n);
        f=0;
        s=1;
        i=1;
        printf("%d %d ",0,1);
        while(i<=n-2)
    {
        curr=f+s;
        printf("%d ",curr);
        f=s;
        s=curr;
        i++;
    }  
}