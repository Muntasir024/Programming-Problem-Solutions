#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, c, i, m;
    scanf("%lld %lld", &n, &k);
    if(2*n > k)
    {
        if(k <= n)
        {
            if(k%2==0) --k;
            c = k/2;
            if(n==1 && k==1) c = 0;
            cout << c << endl;
        }
        else
        {
            cout << n-(k/2) << endl;
        }
    }
    else cout << "0" << endl;
    //main();
    return 0;
}
