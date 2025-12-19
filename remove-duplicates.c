#include <stdio.h>

int main() {
    int n,a[100];
    int *p=a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(p+i)==*(p+j)){
                for(int k=j;k<n-1;k++) *(p+k)=*(p+k+1);
                n--;
                j--;
            }
        }
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
