#include <stdio.h>

int sort(int *scores);
int main()
{
    int scores[5], i;
    printf("Enter 5 score : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &scores[i]);
    sort(scores);
    printf("Sorted : ");
    for (i = 0; i < 5; i++)
        printf("%d ", scores[i]);
}

int sort(int *scores) {
    for (int j=0; j<4; j++) {
        for (int i=0; i<4; i++) {
            if (scores[i] < scores[i+1]) {
                int temp = scores[i];
                scores[i] = scores[i+1];
                scores[i+1] = temp;
            }
        }
    }   
}
