//9. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int x = 2345,y;
    y = x%10;
    x = x - y;
    printf("Last digit of a number stored in a variable as zero 2345 is %d",x);
    return 0;

}
