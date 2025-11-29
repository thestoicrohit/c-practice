//wap to print the summ of all the even numbers from 1 to 20
#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=2;i<=20;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    printf("the summ of all the even numbers from 1 to 20 is %d",sum);
}
