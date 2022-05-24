#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n=0,mx=0;
    string s[102];
    while (getline(cin, s[n]))
    {
        if (s[n].size() > mx)
            mx=s[n].size();
        ++n;
    }

    for (j=0; j<mx; ++j)
    {
        for (i=n-1; i>=0; --i)
        {
            if (s[i].size() > j)
                cout<<s[i][j];
            else
                cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
