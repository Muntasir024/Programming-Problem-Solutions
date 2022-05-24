#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float m, s;
    scanf("%d %f",&n,&m);

    if (n+0.5 < m && n % 5 == 0)
    {
        s = (float) n;
        printf("%.2f\n", ((m-s) - 0.5) );
    }
    else
        printf("%.2f\n", m);

    return 0;
}
