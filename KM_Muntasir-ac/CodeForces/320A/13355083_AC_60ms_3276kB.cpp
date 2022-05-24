#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,i;
    getline(cin,s);
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            s.erase(i,3);
            i=-1;
        }
        else if(s[i]=='1' && s[i+1]=='4')
        {
            s.erase(i,2);
            i=-1;
        }
        else if(s[i]=='1')
        {
            s.erase(i,1);
            i=-1;
        }
    }
    //cout<<s<<endl;
    if(s.length() == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

//main();
    return 0;
}
