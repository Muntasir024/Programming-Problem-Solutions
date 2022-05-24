#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long s, g;
    cin>>s>>g;
    if(s%g) cout<<"-1"<<endl;
    else if(s<=g) cout<<"-1"<<endl;
    else cout<< g << " " << s-g << endl;
}

