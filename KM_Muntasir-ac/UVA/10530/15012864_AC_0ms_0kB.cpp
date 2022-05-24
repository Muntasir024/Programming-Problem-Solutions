#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, l = 0, h = 11;
    string s;
    while(scanf("%d", &x) && x)
    {
        getchar();
        getline(cin, s);
        if(s == "too high")
            h = min(h, x);
        else if(s == "too low")
            l = max(l, x);
        else
        {
            if(x > l && x < h)
                printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");
            l = 0;
            h = 11;
        }
    }
    return 0;
}
