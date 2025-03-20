// Created by: Moreira
// Created on: 10/10/2020
#include <stdio.h>
int main()
{
    int a;
    printf("Hello, World!\n");
    scanf("%d", &a);
    printf("Enter your number:\n");
    if (a > 0)
    {
        printf("Your number is positive\n");
    }
    else if (a < 0)
    {
        printf("Your number is negative\n");
    }
    else
    {
        printf("Your number is zero\n");
    }
    return 0;
}