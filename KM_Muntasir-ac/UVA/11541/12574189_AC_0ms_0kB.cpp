#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,i,j,n,z;
    string s,ans;
    char c;
    cin>>k;
    cin.ignore();
    for(t=1;t<=k;t++)
    {
        cin>>s;
        n=0;
        cout<<"Case "<<t<<": "<<s[0];
        c=s[0];
        s[s.length()]='[';
        for(i=1;i<=s.length();i++)
        {
            if(s[i]>='A' && s[i]<='[')
            {
                for(j=1;j<n;j++)
                {
                    cout<<c;
                }
                c=s[i];
                n=0;
                if(i<s.length())
                cout<<s[i];
            }
            else
            {
                n = (n*10) + (s[i]-'0');
            }
        }
        cout<<endl;
        //reverse(ans.begin(),ans.end());
        //cout<<"Case "<<t<<": "<<ans<<endl;
    }

    return 0;
}
