// Chapter : 6 - item : 5 - 2's complement display

#include <stdio.h>

int main() {
    int num, count=0;
    printf(" *** Display integer in Hexadecimal and 2's Complement format ***\n");
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("%10d in Hexadecimal    : %08x\n", num, num);
    printf("%10d in 2's Complement : ", num);

    for (int i = 31; i >= 0; i--) {

        int mask = (1 << i);

        if (count==4) {printf(" "); count=0;}
        count++;

        if (num & mask) printf("1");
        else  printf("0");
    }

    printf("\n");
    

    return 0;
}


// #include <stdio.h>


// int main() {
//    int num = -65536, count=0;
//     for (int i = 31; i >= 0; i--) {
    
//     int mask = (1 << i);
    
//     if (count==4) {printf(" "); count=0;}
//     count++;

//     if (num & mask) printf("1");
//     else  printf("0");
//     }
//    return 0;
// }
