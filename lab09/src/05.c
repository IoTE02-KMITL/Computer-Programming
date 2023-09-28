#include <stdio.h>
#include <string.h>

int add_word(char *text, char *verb);

int main()
{
    char text[50] = "I";
    char verb[10];
    printf("Enter verb : ");
    scanf("%s", verb);
    add_word(text, verb);
    add_word(text, "You");
    printf("Your text  : %s", text);
}

int add_word(char *text, char *word) {
    char temp[20] = " ";
    int len = strlen(word);
    for (int i=0; i<len; i++) {
        temp[1+i] += word[i];
    }
    strcat(text, temp);
}