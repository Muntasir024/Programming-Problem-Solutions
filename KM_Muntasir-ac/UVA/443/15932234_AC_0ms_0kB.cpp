#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll  n, i, x;
    set <ll > s;
    s.insert(1);
    set <ll > :: iterator itr = s.begin();
    while(s.size() < 7000)
    {
        s.insert(*itr * 2);
        s.insert(*itr * 3);
        s.insert(*itr * 5);
        s.insert(*itr * 7);
        *itr++;
    }
    vector <ll > hum(s.begin(), s.end());
    while(scanf("%lld", &n) && n)
    {
        x = (n % 100) / 10;
        if(n%10==1 && x != 1)
            printf("The %lldst humble number is %lld.\n", n, hum[n-1]);
        else if(n%10==2 && x != 1)
            printf("The %lldnd humble number is %lld.\n", n, hum[n-1]);
        else if(n%10==3 && x != 1)
            printf("The %lldrd humble number is %lld.\n", n, hum[n-1]);
        else
            printf("The %lldth humble number is %lld.\n", n, hum[n-1]);
    }
    return 0;
}