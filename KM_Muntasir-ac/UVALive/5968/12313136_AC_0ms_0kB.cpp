#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int m,n,i,tc,k;
    cin>>tc;
    cin.ignore();
    for(k=1;k<=tc;k++)
    {
        cin>>s;
        m=0;
        n=0;
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]=='S')
            {
                if(s[i+1]=='S')
                    m++;
                else
                    n++;
            }
        }
        cout<<"Case "<<k<<": "<<m<<" / "<<n<<endl;
    }

}
