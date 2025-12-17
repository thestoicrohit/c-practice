#include <stdio.h>

int main() {
    int n,a[100];
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int m1=*p,m2=*p;
    for(int i=0;i<n;i++){
        if(*(p+i)>m1){
            m2=m1;
            m1=*(p+i);
        }
        else if(*(p+i)>m2 && *(p+i)!=m1) m2=*(p+i);
    }
    printf("%d",m2);
    return 0;
}
