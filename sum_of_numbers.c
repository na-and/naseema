//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int input()
{
    int a;
    printf("Enter a number of elements in an array:\n");
    scanf("%d",&a);
    return a;
}
int input_array(int n, int a[n])
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("Enter the element number %d of the array:\n",i);
        scanf("%d",&a[i]);
    }
    return 0;
}
int array_sum(int n, int a[n])
{
    int sum=0,i;
    for(int i=0;i<n;i++)
    { 
        sum = sum+a[i];
    }
    return sum;
}
int show_results(int n, int a[n], int sum)
{
    int i;
    printf("The sum of all the elements is to be turned out:\t");
    for(i=0;i<n-1;i++) 
    {
        printf("%d+",a[i]);
    }
    printf("%d=%d",a[i],sum);
    return 0;
}
int main()
{
    int n,sum;
    n = input();
    int a[n];
    input_array(n,a);
    sum=array_sum(n,a);
    show_results(n,a,sum);
}
