#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    ll l, res = 0, i;
    map <char, int> mp;
    cin >> s;
    l = s.size();
    for(i=0;i<l;i++) mp[s[i]]++;
    for(i=0;i<l;i++) res += mp[s[i]];
    cout << res << endl;
    return 0;
}
