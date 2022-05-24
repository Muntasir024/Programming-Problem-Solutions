#include <bits/stdc++.h>
using namespace std;

void multiply(vector<int> &v, int x)
{
    int carry = 0, res;
    int size = v.size();
    for (int i = 0 ; i < size ; i++)
    {
        int res = carry + v[i] * x;
        v[i] = res % 10;
        carry = res / 10;
    }
    while (carry != 0)
    {
        v.push_back(carry % 10);
        carry /= 10;
    }
}

void findSumOfDigits(int n)
{
    vector<int> v;
    v.push_back(1);

    for (int i=1; i<=n; i++)
        multiply(v, i);
    int sum = 0;
    int size = v.size();
    for (int i = size-1 ; i >= 0 ; i--)
        cout<< v[i];
    cout<<endl;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        cout << n << "!" << endl;
        findSumOfDigits(n);
    }
    return 0;
}
