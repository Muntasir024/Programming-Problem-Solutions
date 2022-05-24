#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        c=0;
        n=1;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='O')
            {
                c+=n;
                n++;
            }
            else
                n=1;
        }
        cout<<c<<endl;
    }


    return 0;
}
