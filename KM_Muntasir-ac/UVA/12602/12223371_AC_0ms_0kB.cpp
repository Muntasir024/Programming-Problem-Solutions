#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t,i,sm,l,m;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        l = ((s[0]-'A')*676)+((s[1]-'A')*26)+(s[2]-'A');
        m = ((s[4]-'0')*1000)+((s[5]-'0')*100)+((s[6]-'0')*10)+(s[7]-'0');
        sm = m - l;
        if(sm<0)
            sm = sm * (-1);
        if(sm<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }

    return 0;
}
