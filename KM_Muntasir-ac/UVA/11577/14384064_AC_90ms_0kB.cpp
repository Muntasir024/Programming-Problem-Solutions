#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, l, mx;
    string s;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        map <int, int> m;
        getline(cin, s);
        l = s.size();
        for(i=0; i<l; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i] = s[i] + 32;
            m[s[i]]++;
        }
        for(i='a', mx=0; i<='z'; i++)
        {
            if(m[i] > mx)
            {
                mx = m[i];
            }
        }
        for(i='a'; i<='z'; i++)
        {
            if(mx == m[i])
            {
                printf("%c", i);
            }
        }
        cout<<endl;
    }
    return 0;
}
