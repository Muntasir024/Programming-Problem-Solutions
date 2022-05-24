#include<bits/stdc++.h>
using namespace std;

string s;
char c[10005][10005];
int t, l, k, i, j;

int main()
{
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        l = s.size();
        k = sqrt(l);
        if(k*k == l)
        {
            l = 0;
            for(i=0; i<k; i++)
            {
                for(j=0; j<k; j++)
                {
                    c[i][j] = s[l++];
                }
            }
            l = 0;
            for(i=0; i<k; i++)
            {
                for(j=0; j<k; j++)
                {
                    printf("%c", c[j][i]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}
