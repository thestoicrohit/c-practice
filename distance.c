#include<stdio.h>
#include<conio.h>
void main()
{
    float v,dis; 
    printf("Enter total distance");
    scanf("%f",&v);
    if(v<=10)
    {
        dis=v*11;
    }
    else if(v<=100)
    {
        dis=110+(v-100)*10;
    }
    else
    {
        dis=1010+(v-100)*9;
    }
    printf("final amount is %.2f",dis);
    getch();
}