#include <stdio.h>

int main() {
    int n,a[100],pos,x;
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&pos,&x);
    for(int i=n;i>pos;i--) *(p+i)=*(p+i-1);
    *(p+pos)=x;
    n++;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
