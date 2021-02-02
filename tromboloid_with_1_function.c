//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>
float volume(float h ,float d ,float b)
{
    float vol1=((h*d*b)+(d/b))/3;
    return vol1;
}
float main()
{
   float h,d,b,vol;
   printf("Enter the height , diameter ,breadth of tromboloid:");
   scanf("%f%f%f",&h,&d,&b);
   vol=volume(h,d,b);
   printf("The volume of tromboloid is %2f",vol);
}
