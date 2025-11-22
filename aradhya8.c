/*Program to find whether the given no. is odd or even.*/

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num%2==0)
        {printf("The entered number, %d, is an Even number.\n", num);}
    else
        {printf("The entered number, %d, is an Odd number.\n", num);}
}