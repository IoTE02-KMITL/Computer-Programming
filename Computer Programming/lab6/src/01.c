#include <stdio.h>

int main() {
    int num, slope;
    char space = ' ';
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &num);
    if (num < 3) return printf(" --- Incorrect number. ---\n");
    printf("Output : \n");
    for (int row=0; row<num; row++) {
        slope = num-row;
        for (int i = 0; i<slope-1; i++) printf("%c", space);
        for (int i = 0; i<num - slope+1; i++) printf("*");
        for (int i = 0; i<num - slope+1; i++) {
            if (i == 0) continue;
            printf("*");
        }
        printf("\n");
    }
    return 0;
}