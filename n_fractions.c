//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction
{
    int n;
    int d;
};
typedef struct fraction fract;
int input_size()
{
    int max ;
    printf("Enter the maximum number of fractions:\n");
    scanf("%d",&max);
    return max;
}
void input(int max , fract a[max])
{
    printf("Enter the numerator and denominator fraction respectively:\n");
    for(int i = 0;i<max;i++)
    {
        scanf("%d%d",&a[i].n , &a[i].d);
    }
}
int gcd(int a , int b)
{ 
     if (b == 0)
        return a;
    return gcd(b, a%b);
}   
fract compute_2fractions(fract f1 , fract f2)
{
    fract f3;
    f3.d = f1.d* f2.d;
    f3.n = (f1.n)*(f2.d)+(f2.n)*(f1.d);
    int common_factor = gcd(f3.n,f3.d);
    f3.d = f3.d/common_factor;
    f3.n = f3.n/common_factor;
    return f3;
}
fract compute_nfractions(int max , fract a[max])
{
    fract sum;
    sum.n = 0;
    sum.d = 1;
    for(int  i=0; i<max;i++)
    {
        sum = compute_2fractions(sum , a[i]);
    }
    return sum;
}
void display(int max , fract a[max] , fract sum)
{
    printf("the fractions to be summed up are\n");
    for(int i = 0;i<max;i++)
    {
        printf("%d/%d\n",a[i].n,a[i].d);
    }
    printf("The sum is : %d/%d ",sum.n,sum.d);
}
int main()
{
    int max;
    max = input_size();
    fract a[max] , sum;
    input(max,a);
    sum = compute_nfractions(max,a);
    display(max,a,sum);
    return 0;
}
