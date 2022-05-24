#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,c;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        c=0;
        getline(cin,s);
        for(i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                s.erase(i,1);
                ++c;
                i--;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
