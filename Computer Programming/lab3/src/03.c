#include <stdio.h>

int main() {
    float fdegree;
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f", &fdegree);
    printf("Temparature in degree Celsius : %.2f", (fdegree - 32) * 5 / 9);
    return 0;
}