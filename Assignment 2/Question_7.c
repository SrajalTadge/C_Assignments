//7. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main()
{
  int x =17;
  (x&1) ? printf("odd") : printf("even");
  getch ();
  return 0;
}
