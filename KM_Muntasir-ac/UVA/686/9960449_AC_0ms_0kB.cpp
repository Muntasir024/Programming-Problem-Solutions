#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bitset<33010> pri;
vi primes;

inline void sieve(long long bo = 33000) {
    long long i,j,a=bo+1;
    pri.set(); pri[0]=pri[1]=1;
    for ( i=2; i<=a; i++) if(pri[i]) {
        for ( j=i*i; j<=a; j+=i) pri[j] = 0;
        primes.push_back(i);
    }
}

int main() {
    sieve();
    int n;
    while (scanf("%d",&n) && n != 0) {
        int i,cnt = 0;
        for ( i = 0; i < primes.size(); i++) {
            if (n - primes[i] < primes[i]) break;
            if (pri[n - primes[i]]) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
