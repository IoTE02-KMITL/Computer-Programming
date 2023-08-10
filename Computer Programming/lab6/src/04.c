#include <stdio.h>

int main() {
    int size, out;
    printf("Enter : ");
    scanf("%d", &size);
    if (size < 1) return 0;

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            out = 1+i+j;
            if (out>size) out -= size;
            printf("%d", out);
        }
        printf("\n");
    }

    return 0;
}