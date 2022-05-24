#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, c;
    string s;
    cin>>s;
    n = s.size();
    if(s[0]=='@' or s[n-1]=='@') cout<<"No solution"<<endl;
    else {
    c=0;
    vector <int> v;
    for(i=0;i<n;i++)
    {
        if(s[i-2]=='@' && s[i]=='@' && i>=2)
        {
            cout<<"No solution"<<endl;
            return 0;
        }
        if(s[i-1]=='@' && s[i]=='@' && i>=1)
        {
            cout<<"No solution"<<endl;
            return 0;
        }
        if(s[i]=='@')
        {
            ++c;
            v.push_back(i+1);
        }
    }
    if(c==0){cout<<"No solution"<<endl;
            return 0;}
    int j=0;
    for(i=0;i<n;i++)
    {
        printf("%c", s[i]);

        if(j == c)
        {
            for(int k=i;k<n;k++)
            {
                printf("%c", s[k]);
            }
            cout<<endl;
            return 0;
        }
        if(v[j]==i && j<c-1)
        {
            j++;
            cout<<",";
        }
    }
    }
}
