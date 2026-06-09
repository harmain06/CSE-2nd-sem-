#include <stdio.h>

float areaRectangle(float l, float w) {
    return l * w;
}

int main() {
    float length, width;

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);

    printf("Area = %.2f", areaRectangle(length, width));

    return 0;
}