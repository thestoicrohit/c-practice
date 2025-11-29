#include<stdio.h>
#include<conio.h>
void main()
{
    float v,bill,finalbill; 
    printf("Enter units");
    scanf("%f",&v);
    if(v<=50)
    {
        bill=v*0.50;
    }
    else if(v<=200)
    {
        bill=50*0.50+(v-50)*0.75;
    }
    else if(v<450)
    {
        bill=50*0.50+150*0.75+(v-200)*1.2;
    }
    else
    {
        bill=0*0.50+150*0.75+250*1.2+(v-450)*1.5;

    }
    finalbill=bill+bill*0.2;
    printf("final amount is %.2f",finalbill);
    getch();
}