#include <stdio.h>

int main(void)
{
    int num;
    printf(" *** switch control structure ***\n");
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num < 1 || num > 20) return 0;

    switch (num % 4)
    {
    case 0:
        printf("%d is Less than 2\n", num % 4);
        break;
    case 1:
        printf("%d is Less than 2\n", num % 4);
        break;
    case 2:
        printf("Equals\n");
        break;
    case 3:
        printf("%d is More than 2\n", num % 4);
        break;
    }
    return 0;
}