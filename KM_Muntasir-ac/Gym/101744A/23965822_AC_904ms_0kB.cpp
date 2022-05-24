#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a,b, i;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        i = __gcd(a, b);
        if(i > 1) cout << "Sim" << endl;
        else cout << "Nao" << endl;
    }
    return 0;
}
