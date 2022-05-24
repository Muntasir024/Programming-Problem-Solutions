#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,l,e,k,p,f;
    string s;
    getline(cin,s);
    cin>>n;
    cin.ignore();

    l=s.length();
    if(l%n == 0)
    {
        p=l/n;
        for(i=0; i<l; i+=p)
        {
            k=i+p-1;
            for(e=i,f=k; e<f; e++,f--)
            {
                if(s[e] != s[f])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    return 0;
}
