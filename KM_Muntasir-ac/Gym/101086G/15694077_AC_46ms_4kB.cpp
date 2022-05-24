#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k, c, f, ans;
    string s[5];
    scanf("%lld", &t);
    while(t--)
    {
        cin>>n;
        cin.ignore();
        for(i=0;i<3;i++)
            getline(cin,s[i]);
        ans = 0;
        for(k=0;k < n*3; k+=3)
        {
            c = f = 0;
            for(j=k;j<k+3;j++)
            {
                for(i=0;i<3;i++)
                {
                    if(s[i][j]=='X') f=1;
                    if(s[i][j]=='*') ++c;
                }
            }
            if(f) ans=max(c,ans);
        }
        printf("%d\n",ans*4);
    }
    return 0;
}
