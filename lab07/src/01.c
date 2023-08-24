#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool has_TA_in(char string[]);

int main()
{
    char name[20];
    printf("Enter your name : ");
    scanf("%s", &name);
    if (has_TA_in(name))
        printf("Your are cute >///<");
    else
        printf("Not cute ._.");
}

bool has_TA_in(char string[])
{
    /* CODE FUNCTION HERE */
    int length = strlen(string);
    if ((string[0] == 'T' || string[0] == 't' ) && (string[length-1] == 'A' || string[length-1] == 'a' )) return true;
    return false;
}