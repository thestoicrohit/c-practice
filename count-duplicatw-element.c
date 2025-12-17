#include <stdio.h>

int main() {
    int n,a[100],c=0;
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(*(p+i)==*(p+j)) c++;
    printf("%d",c);
    return 0;
}
