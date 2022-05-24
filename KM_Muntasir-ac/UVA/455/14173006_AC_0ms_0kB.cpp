#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, m, k, mx;
    string s;
    scanf("%d",&n);
    getchar();
    for(k=1; k<=n; k++)
    {
        cin>>s;
        m = s.size();
        int ps[m+2];
        j = 0;
        i = 1;
        ps[0] = 0;
        while(i < m)
        {
            if(s[i] == s[j])
            {
                ps[i] = j + 1;
                i++;
                j++;
            }
            else
            {
                if(j == 0)
                {
                    ps[i] = 0;
                    i++;
                }
                else
                {
                    j = ps[j-1];
                }
            }
        }

        if(m%(m-j))
            printf("%d\n", m);
        else
            printf("%d\n", m-j);

        if(k < n)
           printf("\n");
    }
    return 0;
}
