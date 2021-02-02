//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float input()
{
    float number;
    printf("Enter number");
    scanf("%f", &number);
    return number;
}
float volume(float h, float d, float b,float a)
{
    a=((h*d*b)+(d/b))/3;
    return a;
}
void display(float vol)
{
    printf("%f", vol);
}
int main()
{
     float h1, d1, b1, result;
     h1=input();
     d1=input();
     b1=input();
     result = ((h1*d1*b1)+(d1/b1))/3;
     display(result);
     return 0;
}
