#include<stdio.h>
void main()
{
    int a,b,c;
    a=5;
    b=++a;
    c=b++ + ++a + 5;
    b=c++ + --b - ++a;
    printf("%d\t%d\t%d",a,b,c);
}