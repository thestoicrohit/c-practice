// wap which will take a no  from user and check if te number is prime number or not

/*#include<stdio.h>
void main()
{
    int i,n,a=0;
    i=2;
    printf("Enter a number=");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        a+=1;
        break;
    }
    if(a==0)
    {printf("the number is prime");}
    else
    printf("the number is not prime");
}
*/

#include <stdio.h>
void main()
{
    int i,n,a=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            a = 1;
            break;
        }
    }

    if(n == 1)
        printf("1 is neither prime nor composite\n");
    else if(a == 0)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");
}

//wap which will take 2 no as a n input from user and print lcm of both the numbers
//wap which will take 2 no as a n input from user and print hcf of both the numbers
//wap which will take inpur from the user and find multiplication of all the even numbers and odd factors of that numbers