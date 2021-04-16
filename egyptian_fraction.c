#include<stdio.h>
struct fraction
{
	int n;
	int d;
};
typedef struct fraction fract;
int max_no_of_instances()
{
    int max;
    printf("\nEnter the number of instances:\n");
    scanf("%d",&max);
   return max;
}
int input_size()
{
   int n;
   printf("\nEnter the maximum number of fractions:\n");
   scanf("\n%d",&n);
   return n;
}
void input(int n , fract f[n])
{
printf("Enter the denominator respectively:\n");
for(int i = 0 ; i<n;i++)
{
   f[i].n = 1;
   scanf("%d",&f[i].d);
}
}
int gcd(int a , int b)
{
  if(b==0)
    return a;
 return gcd(b , a%b);
}
void display(int n , fract f[n] , fract sum)
{
  for(int  i=0; i<n; i++)
  {
     printf("%d/%d + " , f[i].n,f[i].d);
}
printf("0 = %d/%d",sum.n,sum.d);
return ;
}
fract compute_2fractions(fract f1 , fract f2)
{
   fract f3;
   f3.d = f1.d * f2.d;
   f3.n = (f1.n)*(f2.d)+(f2.n)*(f1.d);
   int common_factor =  gcd(f3.n , f3.d);
   f3.d = f3.d/common_factor;
   f3.n = f3.n/common_factor;
   return f3;
}
fract compute_nfractions(int n , fract f[n])
{
  fract sum;
  sum.n = 0;
  sum.d = 1;
  for(int i =0;i<n;i++)
  {
     sum = compute_2fractions(sum,f[i]);
}
display(n,f,sum);
}
void generate_egyptian(int max)
{
   int n;
   fract f[n];
   for(int i =0; i<max;i++)
   {
      n = input_size();
      input(n,f);
      compute_nfractions(n,f);
    }
    return ;
}
int main()
{
   int max;
   max = max_no_of_instances();
   generate_egyptian(max);
 }
