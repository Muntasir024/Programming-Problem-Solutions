#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0, i, l, f;
    string s;
    while(getline(cin, s))
    {
        l = s.size();
        if(s[l - 1] == '?')
            continue;
        else
        {
            int x = 0 , j, b = 0, a = 0;

            for(j = 0; ; j++)
            {
                if(s[j] == '+' || s[j] == '-') break;
                if(s[j] >= '0' && s[j] <= '9')
                {
                    a = (a * 10) + (s[j] - '0');
                }
            }
            f = j;
            for(i = j; ; i++)
            {
                if(s[i] == '=') break;
                if(s[i] >= '0' && s[i] <= '9')
                {
                    b = (b * 10) + (s[i] - '0');
                }
            }
            for(j = i; j < l; j++)
            {
                if(s[j] >= '0' && s[j] <= '9')
                {
                    x = (x * 10) + (s[j] - '0');
                }
            }
            if(s[f] == '+')
                if(a+b == x)
                    ++c;
            if(s[f] == '-')
                if((a-b) == x)
                    ++c;
        //cout<<a<<"|||"<<b<<"|||"<<x<<"|||"<<c<<"+-+"<<s[i]<<endl;
        }
    }
    printf("%d\n", c);
    return 0;
}
