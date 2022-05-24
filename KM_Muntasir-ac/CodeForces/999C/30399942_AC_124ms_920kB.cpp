#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int n, k, i;
    map <char, int> mp;
    cin>>n>>k;
    cin.ignore();
    char s[n+2], p[n+2];
    for(i=0;i<n;i++) {cin>>s[i];p[i]=s[i];}

    sort(p, p+n);
    for(i=0;i<k;i++) mp[p[i]]++;

    for(i=0;i<n;i++)
    {
        if(mp[s[i]]) mp[s[i]]--;
        else cout<<s[i];
    }
    cout<<endl;
    //main();
    return 0;
}
