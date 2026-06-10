#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key, found = 0;

    printf("Enter key to search: ");
    scanf("%d", &key);

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Key found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Key not found");
    }

    return 0;
}