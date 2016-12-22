#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("Character is an ALPHABET.\n");
    }
    else
    {
        printf("Character is NOT ALPHABET.\n");
    }

    return 0;
} 

