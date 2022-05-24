#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,m,l,s,d;
    string n;
    while(getline(cin,n))
    {
        s=0;
        l=n.size();
        for(i=n.size()-1;i>=0;i--)
        {
            s = s + (n[i]-'0') * (pow(2,l-i)-1);
        }
        if(s==0) break;
        cout<<s<<endl;
    }
    return 0;
}
