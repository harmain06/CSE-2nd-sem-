#include <stdio.h>

int main() {
    long long a;   // bigger range than int
    int i, b;

    printf("Enter the number: ");
    scanf("%lld", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    printf("%lld\n", a);

    for(i = 1; i <= b; i++) {
        a = a * a;        // repeated squaring
        printf("%lld\n", a);
    }

    return 0;
}