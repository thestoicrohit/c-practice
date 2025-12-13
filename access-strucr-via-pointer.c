#include <stdio.h>

struct stu {
    int age;
    int marks;
};

int main() {
    struct stu s,*p=&s;
    scanf("%d%d",&s.age,&s.marks);
    printf("%d %d",p->age,p->marks);
    return 0;
}

