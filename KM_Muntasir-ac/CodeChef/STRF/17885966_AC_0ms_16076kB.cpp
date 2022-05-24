#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, l;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        map <char, int> m;
        cin >> s;
        l = s.size();
        for(i=0;i<l;i++)
        {
            m[s[i]]++;
        }
        for(i=0;i<l;i++)
        {
            if(m[s[i]])
            {
                cout << s[i] << "-" << m[s[i]] << " ";
                m[s[i]]=0;
            }
        }
        cout << endl;
    }
    return 0;
}
