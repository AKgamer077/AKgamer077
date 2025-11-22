/*Program to determine whether the given year represents an olympic year or not.*/

#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

        if ((year>1895&&year<1940)||(year>1947))
            {if (year%4==0)
                {printf("The entered year, %d, represents an Olympic year.\n", year);}
            else
                {printf("The entered year, %d, does not represent an Olympic year.\n", year);}}
        else 
            {printf("The entered year, %d, does not represent an Olympic year.\n", year);}
}