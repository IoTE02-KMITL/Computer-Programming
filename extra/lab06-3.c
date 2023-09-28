// Chapter : 6 - item : 3 - จำนวนเฉพาะ list

#include <stdio.h>

int main() {
    int start, end, i, count=0, countNum;
    printf(" *** Show prime number ***\n");
    printf("Enter 2 positive numbers : ");
    scanf("%d%d", &start, &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\nprime number(s) from %d to %d : ", start, end);
    for (i=start; i<=end; i++) {
        countNum = 0;
        for (int j=1; j<=i; j++) {
            if (i % j == 0) countNum++;
        }
        if (countNum == 2) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\ntotal prime numbers : %d\n", count);
    return 0;
}