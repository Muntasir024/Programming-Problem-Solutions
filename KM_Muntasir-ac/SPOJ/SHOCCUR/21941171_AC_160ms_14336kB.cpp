#include<bits/stdc++.h>
using namespace std;
int c[30][100005];
int main()
{
    int n,q,a,b;
    string s;
    cin >> n>>q;
    cin>>s;
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<n; j++)
            c[i][j+1]=c[i][j]+((s[j]-97)==i);
    }
    while(q--)
    {
        cin>>a>>b;
        if(b<a)
            swap(a,b);
        int mx=0;
        char ch;
        for(int i=0; i<26; i++)
        {
            int d=c[i][b]-c[i][a-1];
           if(d>mx)
           {
               mx=d;
               ch=i+97;
           }
        }
       // cout<<endl;
        cout<<ch<<" "<<mx<<endl;
    }
    return 0;
}
