// Chapter : 6 - item : 4 - รับจำนวนเต็ม แสดงตัวอักษร

#include <stdio.h>

int main() {
    int size;
    printf("Enter : ");
    scanf("%d", &size);
    if (size < 1) return 0;

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            char alpha = 'A'+i+j;
            if (alpha >= 'A'+size) alpha = alpha - size;
            printf("%c", alpha);
        }
        printf("\n");
    }

    return 0;
}