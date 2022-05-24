#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l, r, x, i=0, j, c, s, a, b, cnt=0, xor_sum = 0;
    scanf("%d %d", &n, &x);
    if(n==1) {
        cout << "YES" << endl;
        cout << x << endl;
        return 0;
    }
    if(n==2)
    {
        if(x==0)
        cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << x << " 0" << endl;
        }
        return 0;
    }
    cout << "YES" << endl;
    while(true)
    {
        if(cnt == n - 3)	break;
        i++;
        xor_sum ^= i;
        cout << i << " ";
        cnt++;
    }
    if(xor_sum == x)	printf("%d %d %d\n",(1 << 17) ,(1 << 18) ,((1 << 17) ^ (1 << 18)));
    else			printf("0 %d %d\n",(1 << 17) ,(xor_sum ^ (1 << 17) ^ x));
    return 0;
}
