#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int l, i, c[99] = {0}, C[99] = {0}, f = 1;
        l = s.size();
        for(i = 0; i < l; i++)
            c[s[i]-'A']++;
        sort(c, c+26);
        cin>>s;
        l = s.size();
        for(i = 0; i < l; i++)
            C[s[i]-'A']++;
        sort(C, C+26);
        for(i = 0; i<26; i++) if(c[i] != C[i]) f = 0;
        if(f) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
