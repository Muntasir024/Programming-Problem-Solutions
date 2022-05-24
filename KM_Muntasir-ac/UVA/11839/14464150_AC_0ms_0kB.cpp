#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, c, ans;
    string s = "AABCDE";
    while(cin>>t,t)
    {
        while(t--)
        {
            c = 0;
            for(i = 1; i <= 5; i++)
            {
                cin>>n;
                if(n <= 127)
                {
                    ++c;
                    ans = i;
                }
            }
            if(c == 1)
                cout<<s[ans]<<endl;
            else
                cout<<"*"<<endl;
        }
    }
    return 0;
}
