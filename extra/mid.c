#include <stdio.h>

int main()
{
    int x, y, z, mid;
    printf("Enter your number : ");
    scanf("%d%d%d", &x, &y, &z);

    if (x > y && x < z) mid = x;
    else if (y > x && y < z) mid = y;
    else mid = z;

    printf("mid is %d", mid);
}