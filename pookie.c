/* 
*                 *
*  *           *  *
*  *  *     *  *  *
*  *  *  *  *  *  *
*  *  *     *  *  *
*  *           *  *
*                 *
*/

#include<stdio.h>
void main()
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) ;

    int rows = 2 * n - 1;   
    int slots = 2 * n;      

    for (int i = 1; i <= rows; i++) {
        int k = (i <= n) ? i : 2 * n - i;  

        for (int pos = 1; pos <= slots; pos++) {
            if (pos <= k || pos > slots - k) {
                printf("*");  
            } else {
                printf(" ");  
            }
            if (pos != slots) printf("  "); 
        }
        printf("\n");
    }
    
}
