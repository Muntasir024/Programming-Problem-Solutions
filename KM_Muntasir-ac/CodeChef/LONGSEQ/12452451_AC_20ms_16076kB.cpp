#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,x,y,n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        x=0;
        y=0;
        getline(cin,s);
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
                x++;
            else
                y++;
        }
        if(x==1 && y==s.length()-1)
            cout<<"Yes"<<endl;
        else if(y==1 && x==s.length()-1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
