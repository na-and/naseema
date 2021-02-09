//WAP to find the sum of two fractions.
#include <stdio.h>
int main()
{
int a, b,c,d,x,y,i,gcd;
printf("\nEnter the numerator for 1st number :\t");
scanf("%d",&a);
printf("\nEnter the denominator for 1st number :\t");
scanf("%d",&b);
printf("\nEnter the numerator for 2nd number :\t");
scanf("%d",&c);
printf("\nEnter the denominator for 2nd number :\t");
scanf("%d",&d);
x=(a*d)+(b*c);
y=b*d; 
for(i=1; i <= x && i <= y; ++i)
{
if(x%i==0 && y%i==0)
gcd = i;
}
printf("\nThe added fraction is %d/%d ",x/gcd,y/gcd);
printf("\n");
return 0;
}
