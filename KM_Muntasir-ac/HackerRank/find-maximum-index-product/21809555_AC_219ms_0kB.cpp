#include <bits/stdc++.h>
using namespace std;
#define MAX 100007
int main()
{
    long long n, i, x, ans=0;
    cin>>n;
    long long arr[n+2];
    for(i=0; i<n; i++)
        cin>>arr[i];

    vector<long long > v(MAX, 0), vp(MAX, 0);
    stack<long long > s, st;
    for (i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[i] > arr[s.top() - 1])
        {
            x = s.top();
            s.pop();
            v[x - 1] = i + 1;
        }
        s.push(i + 1);
    }
    for (i = 0; i < n; ++i) {
        while (!st.empty() && arr[i] > arr[st.top() - 1]) {
            x = st.top();
            st.pop();
            vp[x - 1] = i + 1;
        }
        st.push(i + 1);
    }
    for(i=0;i<n;i++) ans=max(ans,(v[i]*vp[i]));

    printf("%lld\n", ans);

    return 0;
}
