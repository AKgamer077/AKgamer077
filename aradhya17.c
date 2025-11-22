/*Program to display the results.*/

#include <stdio.h>
void main()
{
    int q1,q2,q3,qtotal,m,f,total;
    printf("Results:\n=========Quizzes===============\nEnter the score of the First quiz: ");
    scanf("%d", &q1);
    printf("Enter the score of the Second quiz: ");
    scanf("%d", &q2);
    printf("Enter the score of the Third quiz: ");
    scanf("%d", &q3);
    qtotal = q1+q2+q3;
    printf("=========Mid-term==============\nEnter the score of the Mid-term: ");
    scanf("%d", &m);
    printf("=========Final=================\nEnter the score of the Final: ");
    scanf("%d", &f);
    printf("Quiz Total: %d\nMid-term: %d\nFinal: %d\n", qtotal, m, f);
    total = qtotal+m+f;
    printf("___________\nTotal: %d\n", total);
}