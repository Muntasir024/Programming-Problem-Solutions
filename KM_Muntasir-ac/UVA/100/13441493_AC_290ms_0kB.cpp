#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m,temp,x,y,c,mx;

    while(scanf("%d %d",&n,&m) != EOF)
    {
        x = n;
        y = m;
        if(n > m)
        {
            temp=n;
            n=m;
            m=temp;
        }
        mx = 0;
        while (n <= m)
        {
            unsigned int s = n;
            c = 1;
            while(s != 1)
            {
                if(s % 2 == 1)
                    s = 3*s + 1;
                else
                    s /= 2;
                ++c;
            }

            if ( c > mx )
                mx = c;

            n++;
        }
        cout<<x<<" "<<y<<" "<<mx<<endl;
    }

    return 0;
}
