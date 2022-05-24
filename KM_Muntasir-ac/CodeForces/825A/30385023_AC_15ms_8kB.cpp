#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, m = 1, f = 0;
    string s;
    cin>>n;
    cin.ignore();
    cin>>s;
    vector <int > v;
    for(i=1; i<n; i++)
    {
        if(s[i]=='0'&&s[i-1]!='0')
        {
            v.push_back(m);
            m=0;
        }
        else if(s[i]=='1')
            m++;
        else if(s[i]=='0')
            v.push_back(0);
    }
    v.push_back(m);
    for(i=0; i<v.size(); i++) cout<<v[i];
    cout<<endl;

}
