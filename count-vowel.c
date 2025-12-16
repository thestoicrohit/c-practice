#include <stdio.h>

int main() {
    char s[100];
    char *p=s;
    int c=0;
    scanf("%s",s);
    while(*p){
        char ch=*p;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') c++;
        p++;
    }
    printf("%d",c);
    return 0;
}
