//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct Point
{
    float x,y;
};
typedef struct Point values;
values input()
{
     values m;
     printf("Enter the values with respect to x:");
     scanf("%f",&m.x);
     printf("Enter the values with respect to y:");
     scanf("%f",&m.y);
     return m;
}
float getdistance(values m, values n)
{
     float result;
     result=sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
     return result;
}
void output(values m,values n,float distance)
{
    printf("Distance between point m %f %f and point n %f %f is %f\n",m.x,m.y,n.x,n.y, getdistance(m,n));
}
float main()
{
    values m,n;
    float q;
    m=input();
    n=input();
    q=getdistance(m,n);
    output(m,n,q);
}
