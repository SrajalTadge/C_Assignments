//3. Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
int x, y, z;

printf("Enter 2 int variables value for swap \n");

scanf("%d %d",&x,&y);
z = x;
x = y;
y = z;

printf("x = %d, y = %d",x,y);

getch ();
return 0;
}
