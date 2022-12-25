//8. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    printf("Size of int is %d bytes\n",sizeof(int));
    printf("Size of char is %d bytes\n",sizeof(char));
    printf("Size of float is %d bytes\n",sizeof(float));
    printf("Size of double is %d bytes\n",sizeof(double));

    getch();
    return 0;

}
