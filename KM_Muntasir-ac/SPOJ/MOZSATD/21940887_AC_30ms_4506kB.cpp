#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    long long mn = 1e17, sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] % 2 == 1)
            mn = min(arr[i], mn);
    }
    if(sum % 2 == 1) {
        sum -= mn;
    }
    cout << sum / 2 << endl;
    return 0;
}
