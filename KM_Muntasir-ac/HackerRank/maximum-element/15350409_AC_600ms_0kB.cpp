#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,x,y,mx;
    map <long long, int> m;
    stack <long long > s;
    priority_queue <long long> pq;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&x);
        if(x==1)
        {
            scanf("%lld",&y);
            s.push(y);
            pq.push(y);
            m[y]++;
        }
        else if(x==2)
        {
            if(!s.empty())
            {
                y=s.top();
                m[y]=m[y]-1;
                if(y==pq.top())
                    pq.pop();
                s.pop();
            }
        }
        else
        {
            while(!pq.empty())
            {
                y=pq.top();
                if(m[y] > 0)
                {
                    printf("%lld\n", y);
                    break;
                }
                else
                {
                    pq.pop();
                }
            }
        }
    }
    /*if(!pq.empty())
        printf("%lld\n",pq.top());
    else
        printf("%lld\n",pq.top());*/
    return 0;
}
