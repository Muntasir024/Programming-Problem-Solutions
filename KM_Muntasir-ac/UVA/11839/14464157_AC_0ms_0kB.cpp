#include<bits/stdc++.h>
using namespace std;
main()
{int t,n,i,c,x;string s="AABCDE";while(cin>>t,t){while(t--){c=0;for(i=1;i<6;i++){cin>>n;if(n <= 127) {++c;x=i;}}if(c==1) cout<<s[x]<<endl;else cout<<"*"<<endl;}}}
