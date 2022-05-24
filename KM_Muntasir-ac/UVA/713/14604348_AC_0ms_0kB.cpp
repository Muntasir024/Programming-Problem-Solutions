#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, x, y;
    string s,p;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s>>p;
        x = s.size();
        y = p.size();
        int cm = 0, k, l, a[205] = {0};
        if(x >= y)
        {
            for(i = 0; i < y; i++)
            {
                k = (s[i] - '0') + (p[i] - '0') + cm;
                cm = k / 10;
                k = k % 10;
                a[i] = k;
            }
            for(i = y; i < x; i++)
            {
                k = (s[i] - '0') + cm;
                cm = k / 10;
                k = k % 10;
                a[i] = k;
            }
            if(cm)
            {
                a[x] = cm;
            }
            for(k = 0; k <= x; k++)
            {
                if(a[k] == 0)
                    continue;
                else
                    break;
            }
            for(i = k; i < x; i++)
                printf("%c", a[i] + '0');
            if(a[i])
                printf("%c", a[i] + '0');
            cout<<endl;
        }
        else
        {
            for(i = 0; i < x; i++)
            {
                k = (s[i] - '0') + (p[i] - '0') + cm;
                cm = k / 10;
                k = k % 10;
                a[i] = k;
            }
            for(i = x; i < y; i++)
            {
                k = (p[i] - '0') + cm;
                cm = k / 10;
                k = k % 10;
                a[i] = k;
            }
            if(cm)
            {
                a[y] = cm;
            }
            for(k = 0; k <= y; k++)
            {
                if(a[k] == 0)
                    continue;
                else
                    break;
            }
            for(i = k; i < y; i++)
                printf("%c", a[i] + '0');
            if(a[i])
                printf("%c", a[i] + '0');
            cout<<endl;
        }
    }

    return 0;
}
