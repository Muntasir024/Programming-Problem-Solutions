#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, m, i, j, l, tc = 1;
    while(true)
    {
        cin>>n;
        cin.ignore();
        string c1 = "" , c2 = "" , r1 = "" , r2 = "" ;
        if(n == 0)
            break;
        for(i=0; i<n; i++)
        {
            getline(cin, s);
            c1 += s;
            l = s.size();
            for(j=0; j<l; j++)
            {
                if(s[j]>='0' && s[j]<='9')
                    r1 += s[j];
            }
        }
        cin>>m;
        cin.ignore();
        for(i=0; i<m; i++)
        {
            getline(cin, s);
            c2 += s;
            l = s.size();
            for(j=0; j<l; j++)
            {
                if(s[j]>='0' && s[j]<='9')
                    r2 += s[j];
            }
        }
        cout<<"Run #"<<tc++<<": ";
        if(m == n && c1 == c2)
            cout<<"Accepted"<<endl;
        else if(r1 == r2)
            cout<<"Presentation Error"<<endl;
        else
            cout<<"Wrong Answer"<<endl;
    }
    return 0;
}
