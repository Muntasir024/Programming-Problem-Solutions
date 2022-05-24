#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i, j, k, l;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        n = 0;
        l = s.size();
        for(i = 0; i < l; i++)
        {
            if(s[i] == 's')
                for(j=i; j<l; j++)
                    if(s[j] == 'm')
                        for(k=j; k<l; k++)
                            if(s[k] == 's')
                                ++n;
        }
        cout<<n<<endl;
    }
    return 0;
}
