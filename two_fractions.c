//WAP to find the sum of two fractions.
#include<stdio.h>
#include<conio.h>
typedef struct
{
        int num;
        int deno;
     
}
Fract;
Fract sum(Fract,Fract); 
int main()
{
     int num1,deno1,num2,deno2;
     printf("Enter fraction 1: numerator denominator:");
     scanf("%d%d",&num1,&deno1);
     printf("Enter fraction 2:numerator denominator:");
     scanf("%d%d",&num2,&deno2);
     Fract f1={num1, deno1}; 
     Fract f2 ={num2, deno2};
     Fract result = sum(f1, f2);
     printf("Result=%d/%d",result.num,result.deno);  
     getch();
     return 0;
}
Fract sum(Fract f1, Fract f2)
{
     Fract result={(f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno};
     return result; 
}
