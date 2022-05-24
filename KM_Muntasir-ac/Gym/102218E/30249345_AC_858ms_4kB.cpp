#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, x, i, j, c = 0, d;
    string s;
    map <string, int> mp;
    mp["Monday"] = 2;
    mp["Tuesday"] = 3;
    mp["Wednesday"] = 4;
    mp["Thursday"] = 5;
    mp["Friday"] = 6;
    mp["Saturday"] = 0;
    mp["Sunday"] = 1;
    cin>>n;
    cin.ignore();
    cin>>s;
    cin>>x;
    d = mp[s];
    //cout<<d<<"-----"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>j;
        if(j>=x && d>1) c++;
        d++;
        d%=7;
    }
    cout<<c<<endl;
    //main();
}

