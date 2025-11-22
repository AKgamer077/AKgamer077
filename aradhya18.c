/*Program to display menu of operations & then perform the chosen operation between the given two numbers & display the result.*/

#include <stdio.h>
void main()
{
    int a,b,op,result;
    printf("Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &op);
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (op==1)
        {result = a+b;
        printf("The result is %d.\n", result);}
    else if (op==2)
        {result = a-b;
        printf("The result is %d.\n", result);}
    else if (op==3)
        {result = a*b;
        printf("The result is %d.\n", result);}
    else if (op==4)
        {if (b!=0)
            {result = a/b;
            printf("The result is %d.\n", result);}
        else 
            {printf("Invalid Operation!\n");}}
    else if (op==5)
        {result = a%b;
        printf("The result is %d.\n", result);}
    else
        {printf("Invalid Operator!\n");}
}