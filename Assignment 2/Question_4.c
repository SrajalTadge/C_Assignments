//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
int x,y;
printf("Enter 2 value for Swap \n");
scanf("%d %d",&x,&y);
x = x+y;
y = x-y;
x = x-y;
printf("x = %d, y = %d",x,y);
return 0;
}
