#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40};
    int n = 4;     
    int num = 50;   

    arr[n] = num;
    n++;
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}