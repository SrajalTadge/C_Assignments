//5. Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
int x = 256, sum = 0;
sum = x%10; // 256%10 = 6
x = x/10; // 256/10 = 25
sum = (x%10) + sum; // (25%10) + 6 = 11
x = x/10; // 25/10 = 2
sum = sum + x; // 11 + 2 = 13
printf("Sum = %d",sum);
getch ();
return 0;
}
