/*Program to accept the value of x & print the corresponding value of sin(1/x).*/

#include <stdio.h>
#include <math.h>
void main()
{
    float x,result;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    if (x!=0)
        {result = sin((1/x));
        printf("The corresponding value of sin(1/%.4f) is %.4f.\n", x, result);}
    
    else 
        {printf("Invalid Input!\n");}
}