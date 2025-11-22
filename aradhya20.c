/*Program to determine whether the character, taken input from user, is a small letter or a capital letter or a digit or a symbol.*/

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);

    if (ch>='a'&&ch<='z')
        {printf("%c is a small letter.", ch);}
    else if (ch>='A'&&ch<='Z')
        {printf("%c is a capital letter.", ch);}
    else if (ch>='0'&&ch<='9')
        {printf("%c is a digit.", ch);}
    else
        {printf("%c is a special symbol.", ch);}
}