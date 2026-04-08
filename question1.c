//Print numbers from 1 to 10 using a while loop in C.
// 1) using while loop
#include <stdio.h>
int main(){
    int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++;
    }
    return 0;
}
// 2) using do while 
#include <stdio.h>
int main(){
    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }while(i <= 10);

    return 0;
}
// 3) using for loop
#include <stdio.h>
int main(){
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }

    return 0;
}