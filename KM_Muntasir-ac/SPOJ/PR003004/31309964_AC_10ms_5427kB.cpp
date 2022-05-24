#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[17][2000][2];
int ar[3001];

ll getSum(ll pos, ll n, ll sum, int flag) {
    if(pos > n) return sum;

    if(dp[pos][sum][flag] != -1) return dp[pos][sum][flag];

    int limit = 9LL;
    if(!flag) limit = ar[pos];

    ll res = 0LL;
    for(int i=0;i<=limit;i++) {
        if(flag || i < limit) res += getSum(pos + 1, n, sum + i, 1);
        else res += getSum(pos + 1, n, sum + i, 0);
    }

    return dp[pos][sum][flag] = res;
}

ll digitSum(string s) {
    ll res = 0;
    for(int i=0;i<s.size();i++) res += s[i] - '0';

    return res;
}

int main() {
    string a, b;
    ll L, R, t;
    cin >> t;
    while(t--) {
        cin >> a >> b;

        for(int i=0;i<a.size();i++)
            ar[i+1] = a[i] - '0';
        memset(dp, -1, sizeof(dp));
        L = getSum(1, a.size(), 0, 0);

        for(int i=0;i<b.size();i++)
            ar[i+1] = b[i] - '0';
        memset(dp, -1, sizeof(dp));
        R = getSum(1, b.size(), 0, 0);

        cout << R - L + digitSum(a) << endl;
    }
    return 0;
}
