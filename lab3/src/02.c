#include <stdio.h>

int main() {
    int num;
    printf(" *** Show a number in variety formats. ***\n");
    printf("Enter integer : ");
    scanf("%d", &num);
    printf("Char\t-> %c\n", num);
    printf("Float\t-> %.2f\n", num*1.0);
    printf("Int*2.5\t-> %.4f\n", num*2.5);
    return 0;
}