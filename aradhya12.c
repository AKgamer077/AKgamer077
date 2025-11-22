/*Program to accept a positive integer less than 1000 as input & print the sum of its digits.*/

#include <stdio.h>
void main()
{
    int num,a,b,c,sum;
    printf("Enter an integer (between 0 & 1000): ");
    scanf("%d", &num);

    if (num>0&&num<1000)
        {a = num/100;
        b = (num-(a*100))/10;
        c = (num-(a*100)-(b*10));
        sum = a+b+c;
        printf("The sum of the number, %d, is %d.\n", num, sum);}

    else 
        {printf("Invalid Input!\n");}
}