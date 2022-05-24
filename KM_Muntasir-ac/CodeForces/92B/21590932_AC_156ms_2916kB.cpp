#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, i, j, x, c=0;
    cin>>s;
    x=s.size()-1;
    for(i=x; i>0; i--)
    {
        if(s[i]=='0') c++;
        else
        {
            c+=2;
            for(j=i-1; j>=0 && s[j]=='1'; j--)
            {
                s[j]='0';
            }
            if(j==-1) c++;
            else s[j]='1';
        }
    }
    cout<< c <<endl;
    return 0;
}
