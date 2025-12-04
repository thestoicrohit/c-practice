#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int age;
    int rollNo;
} s1;

int main()
{
    strcpy(s1.name,"XYZ");
    s1.age=25
    s1.rollNo=221;
    printf("Name of the student is %s ",s1.name);
}


#include<stdio.h>
#include<string.h>


int main()
{
    struct student s1[3];
    for(int i=0;i<3;i++)
}