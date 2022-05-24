#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,i,c,k,p;
    cin>>k;
    cin.ignore();
    while(k--)
    {
        getline(cin,s);
        c=0;
        p=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i] == 'O')
            {
                ++c;
                p+=c;
            }
            else
            {
                c=0;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}

