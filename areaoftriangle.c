#include <stdio.h>

float areaTriangle(float b, float h) {
    return 0.5 * b * h;
}

int main() {
    float base, height;

    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    printf("Area = %.2f", areaTriangle(base, height));

    return 0;
}