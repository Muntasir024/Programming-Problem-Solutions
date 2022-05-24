#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i, j, k, l, c, m;
    string s;
    cin>>s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>n>>m;
        c = 0;
        for(i = n-1; i < m; i++)
        {
            if(s[i] == 's')
                for(j=i; j<m; j++)
                    if(s[j] == 'm')
                        for(k=j; k<m; k++)
                            if(s[k] == 's')
                                ++c;
        }
        cout<<c<<endl;
    }
    return 0;
}
