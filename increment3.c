#include<stdio.h>
void main()
{
    int a,b,c;
    a=5;
    b=++a * 5 - ++a +5;
    c=b-- - --a - 5;
    b=c - b++ - ++b;
    printf("%d\t%d\t%d",a,b,c);
}
