//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
    float num;
    scanf("%f",&num);
    return num;
}
float distance(float a1,float b1,float a2,float b2,float dst)
{
    dst=sqrt((a2-a1)*(a2-a1)*(b2-b1)*(b2-b1));
    return dst;
}
void display(float distance,float a1,float b1,float a2,float b2)
{
    printf("The distance between %f,%f and %f,%f is %f\n",a1,b1,a2,b2,distance);
}
float main()
{
    float a1,b1,a2,b2,distance;
    printf("Enter the distance between the point:");
    a1=input();
    b1=input();
    a2=input();
    b2=input();
    distance=sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
    display(distance,a1,b1,a2,b2);
    return 0;
}
