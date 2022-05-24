#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int s,i,n,c;
    while(getline(cin,st))
    {
        if(st[0] == '0')
            break;
        s=0;
        for(i=0; i<st.length(); i++)
        {
            s = s + (st[i]-'0');
        }
        //cout<<s<<endl;
        if(s%9==0)
        {
            c = 0;
            while(s>9)
            {
                n = s;
                s = 0;
                while(n)
                {
                    s = s + (n%10);
                    n = n / 10;
                }
                ++c;
            }
            cout<<st<<" is a multiple of 9 and has 9-degree "<<++c<<"."<<endl;
        }
        else
            cout<<st<<" is not a multiple of 9."<<endl;
    }

    return 0;
}
