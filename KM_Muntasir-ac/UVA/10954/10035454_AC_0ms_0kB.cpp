#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,a,b,i,n,res;

    while(scanf("%d",&n) && n!=0) {
        priority_queue < int , vector <int>, greater <int> > pq;

    for(i=0;i<n;i++) {
        scanf("%d",&x);
        pq.push(x);
    }
    res=0;
    while (pq.size()>1) {
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        pq.push(a+b);
        res = res+(a+b);
    }
    printf("%d\n",res);
    }

    return 0;
}
