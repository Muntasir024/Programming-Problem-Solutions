#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,c,l;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        map <char, int> m;
        l = s.size();
        char ch='a';
        for(i=0; i<l; i++)
        {
            m[s[i]]++;
        }
        for(i='a'; i<='z'; i++)
        {
            if(m[i] >= 1)
            {
                ch=i;
                break;
            }
        }
        c=0;
        for(i=0; i<l; i++)
        {
            if(m[s[i]] > 1)
            {
                j = m[s[i]]-1;
                c += j;
                m[s[i]]=1;
            }
        }
        if(c>0)
        {
            for(i=0; i<c; i++)
                printf("%c", ch);
        }
        for(i='a'; i<='z'; i++)
        {
            if(m[i] == 1)
            {
                printf("%c", i);
            }
        }
        cout<<endl;
    }
    return 0;
}
