#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[50],t;
    int n,i,x,j;
    cin>>n;
    cin.ignore();
    for(i=0;i<=(2*n)-1;i++)
    {
        getline(cin,s[i]);
    }
    cin>>x;
    cin.ignore();
    for(i=0;i<x;i++)
    {
        getline(cin,t);
        for(j=0;j<=(2*n)-1;j++)
        {
            if(t == s[j]){
                cout<<s[j+1]<<endl;
                break;
            }
        }
    }

    return 0;
}
