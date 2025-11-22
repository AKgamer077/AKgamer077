/*Program to display the second largest number amongst 3 numbers.*/

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Enter another number: ");
    scanf("%d", &c);

    if (a>b)
        {if (a>c)
            {if (c>b||c==b)
                {printf("%d is the second largest number.\n",c);}
            else 
                {printf("%d is the second largest number.\n",b);}}
        else if (a==c)
                {printf("%d is the second largest number.\n",c);}
        else
                {printf("%d is the second largest number.\n",a);}}
    else if (a==b)
        {printf("%d is the second largest number.\n",a);}
    else
        {if (b>c)
            {if (c>a|c==a)
                {printf("%d is the second largest number.\n",c);}
            else 
                {printf("%d is the second largest number.\n",a);}}
        else if (b==c)
                {printf("%d is the second largest number.\n",c);}
        else
                {printf("%d is the second largest number.\n",b);}}
}