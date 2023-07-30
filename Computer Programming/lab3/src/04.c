#include <stdio.h>

int main() {
    char fname[20], lname[20];
    printf("Enter full name : ");
    scanf("%s %s", fname, lname);
    printf("[ %.2s%.1sky ]", fname, lname);
    return 0;
}