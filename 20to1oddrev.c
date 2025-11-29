//wap which will print all the odd numbers between 20 to 1 in reverse order

#include<stdio.h>
void main()
{
    int i;
    for(i=20;i>=1;i--)
    {
    if(i%2!=0)
    printf("%d \n",i);
    }
}