#include <stdio.h>

struct stu {
    int id;
    int marks;
};

int main() {
    struct stu s[3];
    struct stu *p=s;
    for(int i=0;i<3;i++) scanf("%d%d",&p[i].id,&p[i].marks);
    for(int i=0;i<3;i++) printf("%d %d\n",p[i].id,p[i].marks);
    return 0;
}
