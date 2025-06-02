#include<stdio.h>
struct student
{
   char name[50];
   int age;
};

int main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%s", &s1.name);
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf();
    return 0;
}
