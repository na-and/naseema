//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float input()
{
    float number;
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
     printf("Enter the height of tromboloid:");
     h1=input();
     printf("Enter the diameter of tromboloid:");
     d1=input();
     printf("Enter the breadth of tromboloid:");
     b1=input();
     result = ((h1*d1*b1)+(d1/b1))/3;
     display(result);
     return 0;
}

