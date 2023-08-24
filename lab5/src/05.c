#include <stdio.h>

int main() {
    int count;
    printf("Enter number : ");
    scanf("%d", &count);
    if (count <= 0) {
        printf("</3");
    } else {
        for(int i=0; i<count; i++) printf("I Miss You\n");
    }
    return 0;
}