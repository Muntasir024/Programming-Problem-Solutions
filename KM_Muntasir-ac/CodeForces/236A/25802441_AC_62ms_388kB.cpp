#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l, c = 0;
    map <char, int> m;
    cin >> s;
    l = s.size();
    for(int i=0;i<l;i++)
    {
        if(m[s[i]] == 0) ++c;
        m[s[i]]++;
    }
    if(c%2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}
