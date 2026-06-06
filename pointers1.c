//pointers
#include <stdio.h>
int main(){
    int x = 10;
    int *p ;
    p = &x; // p has the memory address of x
    printf("%d\n", x);  // print 10
    printf("%d\n", *p); // prints value of x i.e 10
    printf("%p", p);  // prints adress of x
    return 0;
}