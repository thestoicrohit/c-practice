/*wap which will print the below mentioned structure         *
                                                           * *
                                                         * * *
                                                       * * * *
                                                     * * * * * 
*/
#include<stdio.h>
void main()
{
    int n,nsp,nst;
    scanf("%d",&n);
nsp=n-1;
nst=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=nsp;j++)
    {
        printf(" ");
    }
    for(int j=1;j<=nst;j++)
    {
        printf("*");
    }
    nst++;
    nsp--;
    printf("\n");
}
}
