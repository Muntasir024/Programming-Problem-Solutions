#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, i, ans, d, f;
    cin>>n;
    while(n--)
    {
        cin >> a >> b;
        ans = 0;
        d = b - a + 1;
        f = 1;
        for(i=0;i<32;i++){
            if(d <= (f << i)){
                if((a & (f << i)) && (b & (f << i))) ans += (f << i);
            }
        }

        cout << ans << endl;
    }
    //main();
    return 0;
}

