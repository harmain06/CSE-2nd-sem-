#include <stdio.h>
struct student {
    int marks;
    float cgpa;
    char name[50];
};
int main(){
     struct student s1 = {100,45, "harmain"};

printf("%d\n",s1.marks);
printf("%f\n",s1.cgpa);
printf("%s\n",s1.name);
}


