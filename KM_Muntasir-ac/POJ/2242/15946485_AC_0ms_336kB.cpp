#include<stdio.h>
#include<math.h>
#define ll long long
#define PI 3.141592653589793

int main()
{
    double x1,x2,x3,y1,y2,y3,x,y,r;
    while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF)
    {
        x = ((((x1*x1)+(y1*y1))*(y2-y3))+(((x2*x2)+(y2*y2))*(y3-y1))+(((x3*x3)+(y3*y3))*(y1-y2))) / (2*((x1*(y2-y3))-(y1*(x2-x3))+((x2*y3)-(x3*y2))));
        y = ((((x1*x1)+(y1*y1))*(x3-x2))+(((x2*x2)+(y2*y2))*(x1-x3))+(((x3*x3)+(y3*y3))*(x2-x1))) / (2*((x1*(y2-y3))-(y1*(x2-x3))+((x2*y3)-(x3*y2))));
        r = sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
        r = 2.0 * PI * r;
        printf("%.2f\n", r);
    }
    return 0;
}

