#include<iostream>
using  namespace std;

int main()
{
    double s,v,t;
    int i;

    while(1)
    {
        scanf("%lf",&v);
        if(v==0.00)
            break;
        s = 0;
        i = 1;
        while(s<=v)
        {
            s = s + (float)1/(i+1);
            i++;
        }
        printf("%d card(s)\n",i-1);
    }
    return 0;
}
