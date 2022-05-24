#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch;
    int l, i, k;
    while(cin>>ch)
    {
        if(ch == '0')
            return 0;
        cin>>s;
        l = s.size();
        k = 0;

        for(i = 0; i < l; i++)
        {
            if(s[i] == ch)
            {
                s.erase(i, 1);
                i = -1;
                ++k;
            }
            if(s[i] == '0')
                ++k;
        }

        if(k == l)
        {
            cout<<"0"<<endl;
            continue;
        }
        l = s.size();
        if(l)
            cout<<s<<endl;
        else
            cout<<"0"<<endl;
    }
}
