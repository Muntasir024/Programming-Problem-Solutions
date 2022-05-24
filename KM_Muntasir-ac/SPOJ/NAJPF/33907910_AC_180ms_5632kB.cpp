#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,c,m;
    string s,r;
    scanf("%d",&n);
    getchar();
    for(int k=1; k<=n; k++)
    {
        cin>>s>>r;
        l = s.size();
        m = r.size();
        int a[l+2];
        c = 0;
        size_t i=s.find(r);
        while(i!=string::npos)
        {
            a[c++]=i+1;
            i = s.find(r,i+1);
        }
        if(c)
        {
            printf("%d\n",c);
            for(int i=0; i<c; i++)
            {
                if(i)
                    printf(" ");
                printf("%d",a[i]);
            }
            printf("\n");
        }
        else
        {
            printf("Not Found\n");
        }
        if(k < n)
            printf("\n");
    }
    return 0;
}