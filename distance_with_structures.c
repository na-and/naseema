//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct Points
{
    float x,y;
};
float distance(struct Points m, struct Points n)
{
     float result;
     result=sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
     return result;
}
int main()
{
     struct Points m,n;
     printf("\nEnter the coordinates of point A:\n");
     printf("\nx-axis coordinate:\t");
     scanf("%f",&m.x);
     printf("\ny-axis coordinate:\t");
     scanf("%f",&m.y);
     printf("\nEnter the coordinates of point B:\n");
     printf("\nx-axis coordinate:\t");
     scanf("%f",&n.x);
     printf("\ny-axis coordinate:\t");
     scanf("%f",&n.y);
     printf("\nDistance between points A and B: %f\n", distance(m,n));
     return 0;
}
