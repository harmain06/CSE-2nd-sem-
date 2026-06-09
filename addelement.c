#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40};
    int n = 4;
    int num = 5;

    for(int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = num;
    n++;
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}