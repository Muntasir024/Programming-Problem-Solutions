#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i;
    double c,x;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>n;
        cin.ignore();
        c=0;
        map <char, double> m;
        while(n--)
        {
            cin>>s[0];
            cin>>x;
            cin.ignore();
            m[s[0]]=x;
        }
        cin>>n;
        cin.ignore();
        while(n--)
        {
            getline(cin,s);
            for(i=0;i<s.length();i++)
            {
                c += m[s[i]];
            }
        }
        c = c/100;
        printf("%.2f$\n",c);
    }
    return 0;
}
