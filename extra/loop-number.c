#include <stdio.h>

int main() {
    int size, out, temp = 0;
    printf("Enter : ");
    scanf("%d", &size);
    if (size < 1) return 0;

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            out = 1+i+j+temp;
            printf("%d", out);
        }
        temp += size-1;
        printf("\n");
    }

    return 0;
}