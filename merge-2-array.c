#include <stdio.h>

int main() {
    int n,m,a[50],b[50],c[100];
    int *p=a,*q=b,*r=c;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    for(int i=0;i<n;i++) *r++=*p++;
    for(int i=0;i<m;i++) *r++=*q++;
    for(int i=0;i<n+m;i++) printf("%d ",c[i]);
    return 0;
}
