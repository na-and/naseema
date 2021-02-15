//WAP to find the sum of two fractions.
#include<stdio.h>
#include<conio.h>
typedef struct
     {
        int num;
        int deno;
     
      }Fract;
 
   Fract sum(Fract,Fract);
 float input()
{
float number;
scanf("%f",&number);
return number
}
float output(num,deno)
{
return ("Result=%d%d",num,deno);  //display the result
}
   int main()
    {
     int num1,deno1,num2,deno2;
     printf("Enter fraction 1: numerator denominator:");
 num1 = input();
deno1=input();
     printf("Enter fraction 2:numerator denominator:");
 num2=input();
deno2=input();
    
     Fract f1={num1, deno1}; // fraction 1
     Fract f2 ={num2, deno2};//fraction 2
     Fract result = sum(f1, f2);//sum the fraction
 display=output(result.num,result.deno);
printf(display)
     getch();
     return 0;
    }
   Fract sum(Fract f1, Fract f2)
    {
     Fract result={(f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno};
     return result;
 
   }
