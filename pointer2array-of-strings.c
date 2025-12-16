#include <stdio.h>

int main() {
    char s[3][20];
    char (*p)[20]=s;
    for(int i=0;i<3;i++) scanf("%s",p[i]);
    for(int i=0;i<3;i++) printf("%s\n",p[i]);
    return 0;
}
