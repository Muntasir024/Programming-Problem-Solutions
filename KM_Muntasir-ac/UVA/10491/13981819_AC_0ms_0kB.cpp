#include<bits/stdc++.h>
using namespace std;

int main()
{
    double cr,cw,sw;
    while(scanf("%lf%lf%lf",&cw,&cr,&sw) != EOF)
    {
        cr = ((cw/(cw+cr))*(cr/(cr+cw-sw-1))) + ((cr/(cr+cw))*((cr-1)/(cr+cw-sw-1)));
        printf("%.5lf\n",cr);
    }
    return 0;
}
