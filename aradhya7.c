/*Program to print next 4 numbers.*/

#include <stdio.h>
void main()
{
    int a,i;
    printf("Enter any number between 0 & 99: ");
    scanf("%d", &a);

    if (a>0&&a<99)
        {for (i=1;i<5;i++)
            {if (a==99)
                {a=-1;}
            a=a+1;
            printf("%d\n",a);}}
    else 
        {printf("Invalid Input!\n");}
}  