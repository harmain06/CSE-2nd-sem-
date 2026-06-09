#include <stdio.h>

float areaCircle(float r) {
    return 3.14 * r * r;
}

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f", areaCircle(radius));

    return 0;
}