#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cm, i, ans[105]= {0}, l, j, mx = 0;
    char s[105];
    while(scanf("%s", s) == 1)
    {
        if(s[0] == '0')
            break;
        l = strlen(s);
        if(mx < l)
            mx = l;
        j = cm = 0;
        for(i = l - 1; i >= 0, j < mx; i--)
        {
            if(j > l - 1)
                s[i]='0';
            cm = (s[i] - '0') + ans[j] + cm;
            ans[j++] = cm % 10;
            cm = cm / 10;
        }
        if(cm > 0)
        {
            ans[j++] = cm;
            mx++;
        }
    }
    for(i = mx - 1; i >= 0; i--)
        cout << ans[i];
    cout << endl;
    return 0;
}
