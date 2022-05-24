#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,l;
    string s,n;

    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        for(i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
                s[i]+=32;
        }
        for(i=0;i<s.length();i++)
        {
            if(islower(s[i]))
                continue;
            else
            {
                s.erase(i,1);
                --i;
            }
        }
        n=s;
        l=1;
        for(i=0,j=n.length()-1;i<s.length();i++,j--)
        {
            if(s[i] != n[j])
            {
                l=0;
                break;
            }
        }
        if(l==1)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }

    return 0;
}
