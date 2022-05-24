#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l,i,d,sum,t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                s.erase(i,1);
        }
        sum=0;
        for(i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                l = (s[i]-'0')*2;
                d = 0;
                while(l != 0)
                {
                    d = d + (l % 10);
                    l /= 10;
                }
                sum += d;
            }
            else
            {
                l = (s[i]-'0');
                sum += l;
            }
        }
        if((sum%10)==0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;
    }

    return 0;
}
