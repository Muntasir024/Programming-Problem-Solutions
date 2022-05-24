#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll a[3];
ll I[3][3] , T[3][3];

void mul(ll A[3][3] , ll B[3][3], ll dim)
{
    ll res[dim+1][dim+1];

    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            res[i][j] = 0;
            for(int k = 1;k<=dim;k++)
            {
                ll x = (A[i][k] * B[k][j]) % mod;
                res[i][j] = (res[i][j] + x) % mod;
            }
        }
    }

    for(int i=1;i<=dim;i++)
    {
        for(int j=1;j<=dim;j++)
        {
            A[i][j] = res[i][j];
        }
    }
}

ll getFib(ll n)
{
    if(n <= 2) return a[n];

    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;

    n--;

    while(n){
        if (n&1){
            mul(I, T, 2);
            n--;
        }
        else{
            mul(T, T, 2);
            n /= 2;
        }
    }

    ll x = (a[1] * I[1][1] + a[2] * I[2][1]) % mod;
    return x;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        a[1] = 1, a[2] = 2;
        cout << getFib(n) << endl;
    }
    return 0;
}
