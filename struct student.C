#include<stdio.h>
struct Student {
    char name[25];
    int roll;
    float marks;
    };
    int main()
{
    struct Student s1;
    printf("enter the name:");
    scanf("%s",&s1.name);
    printf("enter the roll number");
    scanf("%d",&s1.roll);
    printf("enter the marks");
    scanf("%f",&s1.marks);
    printf("\nStudent detail\n");
    printf("name:%s\nroll:%d\nmarks:%2f\n",s1.name,s1.roll,s1.marks);
    return 0;
}