#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, l;
    char s;
    while(cin>>s)
    {
        n = s - '0';
        while(cin>>s)
        {
            if(s == '#')
                break;
            n = n * 2 + s - '0' ;
            n %= 131071;
        }
        if(n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
