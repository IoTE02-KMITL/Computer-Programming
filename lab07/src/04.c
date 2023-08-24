#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *to_uppercase(char string[]);
char *to_lowercase(char string[]);
char *to_titlecase(char string[]);

int main()
{
    char name[100];
    printf("Enter a string : ");
    scanf("%[^\n]", name);
    printf("Capital : %s\n", to_uppercase(name));
    printf("Small : %s\n", to_lowercase(name));
    printf("Title : %s\n", to_titlecase(name));

    return 0;
}

char *to_uppercase(char string[]) {
    int length = strlen(string);
    for (int i=length-1; i>=0; i--) string[i] = toupper(string[i]);
    return string;
}

char *to_lowercase(char string[]) {
    int length = strlen(string);
    for (int i=length-1; i>=0; i--) string[i] = tolower(string[i]);
    return string;
}

char *to_titlecase(char string[]) {
    int length = strlen(string);
    for (int i=length-1; i>=0; i--) {
        if (i == 0 || string[i-1] == ' ') string[i] = toupper(string[i]);
        else string[i] = tolower(string[i]);
    }
    return string;
}