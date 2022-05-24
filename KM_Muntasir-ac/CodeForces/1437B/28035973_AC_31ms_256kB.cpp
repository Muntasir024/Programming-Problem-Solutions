#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, a1, a0, b1, b0, i, a, b;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> x;
        cin.ignore();
        cin >> s;

        a = b = 0;

        for(i=1;i<x;i++)
        {
            if(s[i-1]=='1' && s[i]=='1') a++;
            if(s[i-1]=='0' && s[i]=='0') b++;
        }
        cout << max(a,b) << endl;
    }

    return 0;
}

