#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,i,j,x;
    while(cin>>N,N)
    {
        map <int, int> m,n;
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                cin>>x;
                m[i] += x;
                n[j] += x;
            }
        }
        int ii=0,jj=0,c=0,d=0;
        for(i=0; i<N; i++)
        {
            if(m[i]%2 != 0)
            {
                c++;
                ii=i;
            }
            if(n[i]%2 != 0)
            {
                d++;
                jj=i;
            }
            if(c+d > 2)
                break;
        }
        if((c+d) == 0)
            cout<<"OK"<<endl;
        else if(c==1 && d==1)
        {
            cout<<"Change bit ("<<ii+1<<","<<jj+1<<")"<<endl;
        }
        else
            cout<<"Corrupt"<<endl;
    }

    return 0;
}
