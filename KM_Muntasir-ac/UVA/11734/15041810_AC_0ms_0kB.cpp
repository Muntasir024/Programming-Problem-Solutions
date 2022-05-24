#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, tc = 1, l;
    string s, p;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        getline(cin, p);
        if(s == p)
            cout<<"Case "<<tc++<<": Yes"<<endl;
        else
        {
            l = s.size();
            for(i=0; i<l; i++)
            {
                if(s[i] == ' ')
                {
                    s.erase(i, 1);
                    i = -1;
                }
            }
            l = p.size();
            for(i=0; i<l; i++)
            {
                if(p[i] == ' ')
                {
                    p.erase(i, 1);
                    i = -1;
                }
            }
            if(s != p)
                cout<<"Case "<<tc++<<": Wrong Answer"<<endl;
            else
                cout<<"Case "<<tc++<<": Output Format Error"<<endl;
        }
    }
    return 0;
}

