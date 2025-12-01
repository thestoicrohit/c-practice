#include<stdio.h>
void main()
{
    int a,b,c;
    a=5;
    b=++a;
    c=a++ - ++a + 5;
    b=++c - b-- - --b;
    printf("%d\t%d\t%d",a,b,c);
}