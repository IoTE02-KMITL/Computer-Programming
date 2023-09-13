#include <stdio.h>

int main() {
    int num, a, b;
    printf(" *** Digit to word ***\n");
    printf("Enter a two-digit number : ");
    scanf("%d", &num);

    a = num / 10;
    b = num % 10;

    printf("You enter the number ");
    if (num == 10) printf("ten");
    else if (num == 11) printf("eleven"); 
    else if (num == 12) printf("tweleve");
    else if (num == 13) printf("thirteen");
    else if (num == 14) printf("forteen");
    else if (num == 15) printf("fifteen");
    else if (num == 16) printf("sixteen");
    else if (num == 17) printf("seventeen");
    else if (num == 18) printf("eigthteen");
    else if (num == 19) printf("nineteen");
    else {
        if (a == 2) printf("twenty");
        else if (a == 3) printf("thirty");
        else if (a == 4) printf("forty");
        else if (a == 5) printf("fifty");
        else if (a == 6) printf("sixty");
        else if (a == 7) printf("senventy");
        else if (a == 8) printf("eighty");
        else if (a == 9) printf("ninety");

        if (b == 1) printf("-one");
        else if (b == 2) printf("-two");
        else if (b == 3) printf("-three");
        else if (b == 4) printf("-for");
        else if (b == 5) printf("-five");
        else if (b == 6) printf("-six");
        else if (b == 7) printf("-seven");
        else if (b == 8) printf("-eight");
        else if (b == 9) printf("-nine");
    }
    printf(".\n");
    return 0;
}