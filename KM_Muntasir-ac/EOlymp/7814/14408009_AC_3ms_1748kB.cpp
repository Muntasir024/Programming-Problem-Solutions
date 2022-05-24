#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[5], i;
    scanf("%d", &n);
    a[0] = n / 10;
    a[1] = n % 100;
    a[2] = ((n / 100) * 10) + (n % 10);

    sort(a,a+3);
    if(a[0] > 9) printf("%d\n", a[0]);
    else if(a[1] > 9) printf("%d\n", a[1]);
    else printf("%d\n", a[2]);
    return 0;
}
