//Write a program to add two user input numbers using one function.
#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
   int o, p, q;
   printf("Enter first number:");
   scanf("%d",&o);
   printf("Enter second number:");
   scanf("%d",&p);
   q=sum(o,p);
   printf("Sum of the numbers: %d", q);
   return 0;
}

