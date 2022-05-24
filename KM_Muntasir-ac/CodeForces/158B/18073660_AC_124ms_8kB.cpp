#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, c, x;
    map <int, int> m;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        m[x]++;
    }
    c = m[4];
    if(m[1] >= m[3])
    {
        c = c + m[3];
        m[1] = m[1] - m[3];
        m[3] = 0;
    }
    else
    {
        c = c + m[1];
        m[3] = m[3] - m[1];
        m[1] = 0;
    }
    if(m[2])
    {
        c = c + (m[2] / 2);
        m[2] = m[2] % 2;
    }
    c += m[3];
    c += ((m[2]*2 + m[1]) / 4);
    if(((m[2]*2 + m[1]) % 4) != 0)
        ++c;
    cout<<c<<endl;
    return 0;
}