#include <stdio.h>
#include <string.h>

int main() {
    char fname[100], lname[100];
    int age, length = 0;
    printf(" -> ");
    scanf("%s%s%d", fname, lname, &age);

//  (1) Using string.h
    length = strlen(fname) + strlen(lname);
    printf("Your lucky : %d\n", length);

//  (2) Normal Loop by For
    int i,j;
    for (i=0; fname[i] != '\0'; i++) {}
    for (j=0; lname[j] != '\0'; j++) {}
    int length1 = i+j;
    printf("Your lucky : %d\n", length1);
    
    return 0;
}