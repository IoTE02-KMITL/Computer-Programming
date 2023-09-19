// Chapter : 6 - item : 2 - ตรวจสอบจำนวนเฉพาะ

#include <stdio.h>

int main() {
    int num, countNum = 0;
    printf(" *** Checking for PRIME number. ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &num);

    if (num < 0) return printf("Only positive whole number : DO YOU GET IT? Ah....\n");

    for (int i = 1; i<=num; i++) {
        if (num % i == 0) countNum++;
    }

    if (countNum == 2) printf("%d is a PRIME number.\n", num);
    else printf("%d is NOT a prime number.", num);
    return 0;
}