#include <stdio.h>
struct student {
    int marks;
    float cgpa;
    char name[50];
};
int main(){
     struct student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Enter marks: ");
    scanf("%d", &s1.marks);

printf("%d\n",s1.marks);
printf("%.2f\n",s1.cgpa);
printf("%s\n",s1.name);
}

