//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int input()
{
    int a; 
    printf("Enter a number\n");
    scanf("%d",&a);
    return a;
}
int find_sum(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}
void output(int a, int b, int c)
{
    printf("Sum of %d + %d is %d\n",a,b,c);
}
int main()
{
    int o,p,q;
    o=input();
    p=input();
    q=find_sum(o,p);
    output(o,p,q);
    return 0;
}
