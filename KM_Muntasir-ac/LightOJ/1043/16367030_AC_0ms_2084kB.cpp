#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    double ab, ac, bc, rat, v, s;
    ll  tc, k;
    scanf("%lld", &k);
    for(tc = 1; tc <= k; tc++)
    {
        scanf("%lf %lf %lf %lf", &ab, &ac, &bc, &rat);
        /*s = (ab+ac+bc) / 2.0;
        v = sqrt(s*(s-ab)*(s-ac)*(s-bc));
        v = v * rat;
        v = v / (1+rat);*/
        v = ((ab * ab) * rat) / (rat + 1);
        v = sqrt(v);
        printf("Case %lld: %.12lf\n", tc, v);

    }
    return 0;
}
