#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,l,m,n,cnt;
    string st1,st2;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,st1);
        getline(cin,st2);

        m = st1.length();
        n = st2.length();
        if(m == n)
        {
            l=1;
            for(i=0; i<st1.length(); i++)
            {
                if(st1[i] == 'a' || st1[i] == 'e' || st1[i] == 'i' || st1[i] == 'o' || st1[i] == 'u')
                {
                    st1[i]='a';
                }
                if(st2[i] == 'a' || st2[i] == 'e' || st2[i] == 'i' || st2[i] == 'o' || st2[i] == 'u')
                {
                    st2[i]='a';
                }
            }
            for(i=0; i<st2.length(); i++)
                if(st1[i] != st2[i])
                {
                    l=0;
                    break;
                }
            if(l==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }

    return 0;
}
