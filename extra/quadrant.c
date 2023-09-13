#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter your x and y : ");
    scanf("%d%d", &x, &y);
    if (x >= 0 && y >= 0)
    {
        printf("x and y is Q1");
    }
    else if (x < 0 && y >= 0)
    {
        printf("x and y is Q2");
    }
    else if (x < 0 && y < 0)
    {
        printf("x and y is Q3");
    }
    else
    {
        printf("x and y is Q4");
    }
}