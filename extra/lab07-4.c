// Chapter : 7 - item : 4 - (4) ลับสุดยอด

#include <stdio.h>

int has_lower_case(char string[]);
int has_upper_case(char string[]);
int has_number(char string[]);
int count_length(char string[]);

int main()
{
    char password[200];
    printf("Enter password : ");
    scanf("%s", password);
    /* CODE OUTPUT HERE */
    printf("verifying . . .\n");
    int condition = has_lower_case(password) && has_upper_case(password) && has_number(password) && count_length(password);
    if (condition == 1) printf("> Your password is strong!\n");
    else printf("> Your password is weak!\n");
}

int has_number(char string[]) {
    int i, flag=0; // 0 is false
    for(i=0; string[i]!='\0'; i++) {
        // printf("%c",string[i]);
        if(string[i]>'0' && string[i]<'9') {
            flag++;
        }
    }
    return flag > 0;
}

int has_lower_case(char string[]) {
    int i, flag=0; // 0 is false
    for(i=0; string[i]!='\0'; i++) {
        // printf("%c",string[i]);
        if(string[i]>'a' && string[i]<'z') {
            flag++;
        }
    }
    return flag > 0;    
}

int has_upper_case(char string[]) {
    int i, flag=0; // 0 is false
    for(i=0; string[i]!='\0'; i++) {
        // printf("%c",string[i]);
        if(string[i]>'A' && string[i]<'Z') {
            flag++;
        }
    }
    return flag > 0;    
}

int count_length(char string[]) {
    int i, flag=0; // 0 is false
    for(i=0; string[i]!='\0'; i++);
    return i >= 8;      
}