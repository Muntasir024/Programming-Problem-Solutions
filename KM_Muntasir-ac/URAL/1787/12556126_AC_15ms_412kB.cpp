#include <iostream>
using namespace std;

int main()
{
    int k,n,sum=0,i;
    cin>>k>>n;
    int a[n+5];

    for (i=0; i<n; i++)
    {
        cin >> a[i];
        if (a[i]>k)
        {
            sum += (a[i] - k);
        }
        else
        {
            if (sum!=0)
            {
                if ((k - a[i]) > sum)
                {
                    sum = 0;
                }
                else
                {
                    sum -= (k - a[i]);
                }
            }
        }

    }
    cout << sum << endl;

    return 0;
}
