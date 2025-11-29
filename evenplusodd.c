#include <stdio.h>
void main()
{
    int i,even=0,odd=0;
    for(i = 1; i <= 20; i++) 
    {
        if(i % 2 == 0) 
            even+=i;
        else             
            odd+=i;
    }
    printf("The sum of all even numbers from 1 to 20 is %d\n",even);
    printf("The sum of all odd numbers from 1 to 20 is %d\n",odd);
}
