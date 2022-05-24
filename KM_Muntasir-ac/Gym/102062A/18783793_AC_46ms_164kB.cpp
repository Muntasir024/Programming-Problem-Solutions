#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double n, a,b,c,d;
    cin >> t;
    while(t--)
    {
        cin >> n>>a>>b>>c>>d;
        if((n*.5) < (a+b+c+d)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

