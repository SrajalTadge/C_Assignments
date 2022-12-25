//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Value \n");

    scanf("%d",&x);

    printf("Unit Digit of  %d is %d",x,x%10);
    getch();
    return 0;
}
