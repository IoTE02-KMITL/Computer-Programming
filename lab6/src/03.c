#include <stdio.h>

int main() {
    int num, count;
    printf("Enter a number (1-16) : ");
    scanf("%d", &num);
    if (num < 1 || num > 16) {
        return printf("Out of range ! ! !\n");
    }
    
    count = num;

    for (int row = 0; row < num; row++)
    {
        printf("%X", count);
        count -= 1;
    }
    printf("\n");

    for (int row = 0; row < num - 2; row++)
    {
        printf("%X", num);
        for (int row = 0; row < num - 2; row++)
        {
            printf(" ");
        }
        printf("1");
        printf("\n");
    }

    count = num;

    for (int row = 0; row < num; row++)
    {
        printf("%X", count);
        count -= 1;
    }
    printf("\n");

    return 0;
}