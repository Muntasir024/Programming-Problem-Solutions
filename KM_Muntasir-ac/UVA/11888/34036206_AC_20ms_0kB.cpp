#include<bits/stdc++.h>
using namespace std;

char str[200007];
int palin(int s, int t)
{
    while(s<t)
    {
        if(str[s]!=str[t]) return 0;
        s++, t--;
    }
    return 1;
}

int main()
{
    int t, l, i, f;
    cin >> t;
    while(t--)
    {
        scanf("%s", str);
        l = strlen(str), f = 0;
        for(i=0;i<l-1;i++)
        {
            if(palin(0, i)&& palin(i+1, l-1) && f==0) {
                f=1;
                printf("alindrome\n");
                break;
            }
        }
        if(palin(0, l-1) && f==0) printf("palindrome\n"), f=1;
        if(f==0)
        printf("simple\n");
    }
}
