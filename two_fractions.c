//WAP to find the sum of two fractions.
#include<stdio.h>
struct fraction
{
     int n , d;
};
typedef struct fraction fract;
fract input()
{
    fract f;
    printf("Enter the numerator:\n");
    scanf("%d",&f.n);
    printf("Enter the denominator:\n");
    scanf("%d",&f.d);
    return f;
}
int gcd(int a , int b)
{ 
     if (a == 0)
        return b;
    return gcd(b%a, a);
}   
     
fract compute_add(fract f1 , fract f2)
{
    fract f3;
    f3.d = f1.d* f2.d;
    f3.n = (f1.n)*(f2.d)+(f2.n)*(f1.d);
    int common_factor = gcd(f3.n,f3.d);
    f3.d = f3.d/common_factor;
    f3.n = f3.n/common_factor;
    return f3;
}   
void display(fract f1 , fract f2 , fract f3)
{
    printf("The addition of %d/%d and %d/%d is %d/%d\n",f1.n,f1.d,f2.n,f2.d,f3.n,f3.d);
}
int main()
{
    fract f1,f2,f3;
    f1 = input();
    f2 = input();
    f3 = compute_add(f1,f2);
    display(f1,f2,f3);
    return 0;
}
