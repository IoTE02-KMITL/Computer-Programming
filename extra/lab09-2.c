#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100],*p_left, *p_right;
    printf(" *** Palindrome Verification ***\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]", str);

    p_left = str;

    while (*p_left != '\0')
    {
       ++p_left;
    }
    --p_left;

    for (p_right=str; p_left>=p_right;) {
        if (tolower(*p_left) == tolower(*p_right)) {
            --p_left;
            p_right++;
        } else break;
    }
    
    printf("\"%s\" is ", str);
    if (p_right > p_left) printf("PALINDROME.");
    else printf("NOT palindrom.");

    return 0;
}
