#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,cnt,t,k;
    cin>>t;
    cin.ignore();
    for(k=1; k<=t; k++)
    {
        getline(cin,s);
        cnt=0;
        for(i=0; i<s.length(); i++)
        {
            if(s[i] != 'B' && s[i] != 'S' && s[i] != 'D')
            {
                if(s[i+2] != 'B' && s[i+1] != 'B' && s[i+1] != 'S' && s[i-1] != 'S')
                    cnt++;
            }
        }

        cout<<"Case "<<k<<": "<<cnt<<endl;
    }
    return 0;
}
