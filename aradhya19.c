/*Program to display the electricity bill as per the meter readings taken input from the user.*/

#include <stdio.h>
void main()
{
    float i,f,c,rate,bill;
    printf("Enter initial reading: ");
    scanf("%f", &i);
    printf("Enter final reading: ");
    scanf("%f", &f);
    c = f-i;

    if (c>500||c==500)
        {rate = 5.50;
        bill = c*rate;
        printf("Your total bill for %.2f units is %.2f.\n", c, bill);}
    else if ((c<500&&c>200)||c==200)
        {rate = 3.50;
        bill = c*rate;
        printf("Your total bill for %.2f units is %.2f.\n", c, bill);}
    else if ((c<200&&c>100)||c==100)
        {rate = 2.50;
        bill = c*rate;
        printf("Your total bill for %.2f units is %.2f.\n", c, bill);}
    else if ((c<100&&c>0)||c==0)
        {rate = 1.50;
        bill = c*rate;
        printf("Your total bill for %.2f units is %.2f.\n", c, bill);}
    else
        {rate = 0;
        printf("Invalid Input!\n");}
}