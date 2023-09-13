#include <stdio.h>

int main() {
    int sum = 0;
    char input[100];
    printf("INPUT : ");
    scanf("%[^\n]", input);

    for (int i=0; input[i] != '\0'; i++) {
        printf("%d ", input[i]);
        if (input[i+1] != '\0') printf("+ ");
        sum += input[i];
    }
    printf("= %d\n", sum);
    return 0;
}