#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, i, l;
    cin>>n;
    if(n == 0) cout<<10<<endl;
    else if(n < 10) cout<<n<<endl;
    else
    {
        vector <long long> v;
        for(i=9;i>1;i--)
        {
            while(n%i == 0)
            {
                v.push_back(i);
                n = n / i;
            }
            if(n <= 1) break;
        }
        l = v.size();
        if(n!=1 || l == 0) cout<<-1<<endl;
        else
        {
            sort(v.begin(), v.end());
            for(i = 0; i < l; i++)
                cout<<v[i];
            cout<<endl;
        }
    }
    return 0;
}
