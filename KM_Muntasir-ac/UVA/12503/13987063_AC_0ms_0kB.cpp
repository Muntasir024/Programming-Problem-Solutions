#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,k;
    string p;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        int c=0;
        cin>>n;
        cin.ignore();
        string s[n+2];
        for(i=1; i<=n; i++)
        {
            cin>>s[i];
            if(s[i] == "LEFT")
                --c;
            else if(s[i] == "RIGHT")
                ++c;
            else
            {
                cin>>p>>k;
                if(s[k] == "LEFT")
                {
                    --c;
                    s[i]=s[k];
                }
                else if(s[k] == "RIGHT")
                {
                    ++c;
                    s[i]=s[k];
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
