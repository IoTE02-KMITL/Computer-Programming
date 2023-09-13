#include <stdio.h>

int main() {
    int sum = 0;
    char input[100];
    printf("INPUT : ");
    scanf("%[^\n]", input);

    for (int i=0; input[i] != '\0'; i++) {
        if (i == 0 && input[i] / 100 > 0) printf("%-5d", input[i]);
        else if ((i == 0 && input[i] / 10 > 0) || input[i] / 100 > 0) printf("%-4d", input[i]);
        else printf("%-3d", input[i]);
        if (input[i+1] != '\0') printf("+ ");
        sum += input[i];
    }
    printf("= %d\n", sum);
    return 0;
}