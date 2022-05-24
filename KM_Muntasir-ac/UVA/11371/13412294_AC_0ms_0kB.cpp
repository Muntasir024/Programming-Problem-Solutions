#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,x,y;
    long long i,a,b;
    while(getline(cin,s))
    {
        sort(s.begin(), s.end(), greater<char>());
        x=s;
        a=stoll(x);
        reverse(s.begin(),s.end());
        y=s;
        i=0;
        while(y[i]=='0') i++;
        swap(y[i],y[0]);
        
        b=stoll(y);
        cout<<x<<" - "<<y<<" = "<<a-b<<" = 9 * "<<(a-b)/9<<endl;
    }

    return 0;
}
