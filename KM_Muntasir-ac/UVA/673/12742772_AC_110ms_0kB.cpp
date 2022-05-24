#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,l;
    string s;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        getline(cin,s);
        stack <char> m;
        if(s.compare("\n")==0)
            cout<<"Yes"<<endl;
        else
        {
            for(i=0; i<s.length(); i++)
            {
                if(!m.empty() && s[i]==')')
                {
                    if(m.top()=='(')
                        m.pop();
                }
                else if(!m.empty() && s[i]==']')
                {
                    if(m.top()=='[')
                        m.pop();
                }
                else
                {
                    m.push(s[i]);
                }
            }
            if(m.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}
