/*Program to accept a decimal number between 0 & 32, and print its binary equivalent.*/

#include <stdio.h>
void main()
{
    int num,x0,x1,x2,x3,x4;
    printf("Enter a decimal number (between 0 & 32): ");
    scanf("%d", &num);

    if (num>0&&num<32)
        {x4 = num%2;
        x3 = (num/2)%2;
        x2 = (num/4)%2;
        x1 = (num/8)%2;
        x0 = (num/16)%2;

        if (x0==0)
            {if (x1==0)
                {if (x2==0)
                    {if (x3==0)
                        {printf("The binary equivalent of %d is %d.\n", num, x4);}
                    else
                        {printf("The binary equivalent of %d is %d%d.\n", num, x3, x4);}}
                else 
                    {printf("The binary equivalent of %d is %d%d%d.\n", num, x2, x3, x4);}}
            else 
            {printf("The binary equivalent of %d is %d%d%d%d.\n", num, x1, x2, x3, x4);}}
        else 
            {printf("The binary equivalent of %d is %d%d%d%d%d.\n", num, x0, x1, x2, x3, x4);}}
    else 
        {printf("Invalid Input!\n");}
}