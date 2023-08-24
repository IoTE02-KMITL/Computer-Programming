#include <stdio.h>

int main()
{
    int num = 9, count;
    printf("input (1-20)  : ");
    scanf("%d", &count);

    if (count < 1 || count > 20) return printf("\nNo Answer\n");

    printf("\n");
    for (int row = 0; row < count; row++)
    {

        for (int col = 0; col < count; col++)
        {
            printf("%3d", num);
            num -= 1;
            if (num < 1)
                num = 9;
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}