
#include <stdio.h>
#include <ctype.h> 

int main() 
{
    char str[100];
    int count = 0, i;
    printf("Enter a string: ");
    gets(str);  
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (isalpha(str[i])) 
        {  
            count++;
        }
    }

    printf("Number of letters in the string: %d", count);
    
    return 0;
}
