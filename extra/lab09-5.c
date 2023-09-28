#include <stdio.h>
#include <string.h>

int add_topping(char *charnom, char top[10]);
int main()
{
    char chanom[50] = "Chanom";
    char top1[10], top2[10];
    printf("Enter 2 topping : ");
    scanf("%s %s", &top1, &top2);
    add_topping(chanom, top1);
    add_topping(chanom, top2);
    printf("Your order\t: %s", chanom);
}

int add_topping(char *charnom, char top[10]) {
    char temp[20] = " + ";
    int len = strlen(top);
    for (int i=0; i<len; i++) {
        temp[3+i] += top[i];
    }
    strcat(charnom, temp);
}
