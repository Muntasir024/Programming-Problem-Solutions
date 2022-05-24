#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 1, t;
    map <long long, bool > m;
    cin >> t;
    while(t--)
    {
        cin >> n;

        if(n%2==0)
        {
            int p[32], s[32];
            long long a = n, ans = 0, i = 0, j;
            while(a)
            {
                if(a%2)
                    p[i] = 1;
                else
                    p[i] = 0;
                a /= 2;
                i++;
            }
            a = i;
            for(i=0, j = a - 1;i<a;i++, j--)
            {
                s[i] = p[j];
            }
            for(i=0;i<a;i++)
            {
                if(s[i] == 1)
                   ans += pow(2, i);
            }
            cout << ans << endl;
        }
        else
            cout << n << endl;
    }
    return 0;
}
