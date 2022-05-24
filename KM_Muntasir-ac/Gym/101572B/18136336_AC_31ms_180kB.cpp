#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    scanf("%d", &n);
    string s[n+2], p[10];
    double a[n+2], b[n+2], mn;
    for(i=0; i<n; i++)
    {
        cin >> s[i];
        cin.ignore();
        scanf("%lf %lf", &a[i], &b[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(b[i]>b[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
                swap(s[i],s[j]);
            }
        }
    }
    mn = 1007;
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            if(mn>a[i]+b[1]+b[2]+b[3])
            {
                mn = a[i]+b[1]+b[2]+b[3];
                p[0] = s[i];
                p[1] = s[1];
                p[2] = s[2];
                p[3] = s[3];
            }
        }
        else if(i==1)
        {
            if(mn>a[i]+b[0]+b[2]+b[3])
            {
                mn = a[i]+b[0]+b[2]+b[3];
                p[0] = s[i];
                p[1] = s[0];
                p[2] = s[2];
                p[3] = s[3];
            }
        }
        else if(i==2)
        {
            if(mn>a[i]+b[0]+b[1]+b[3])
            {
                mn = a[i]+b[0]+b[1]+b[3];
                p[0] = s[i];
                p[1] = s[0];
                p[2] = s[1];
                p[3] = s[3];
            }
        }
        else
        {
            if(mn>a[i]+b[0]+b[1]+b[2])
            {
                mn = a[i]+b[0]+b[1]+b[2];
                p[0] = s[i];
                p[1] = s[0];
                p[2] = s[1];
                p[3] = s[2];
            }
        }
    }
    cout << mn << endl;
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;
    cout << p[3] << endl;
    return 0;
}
