#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,t,k,l,i,j,s;
    cin>>t;
    while(t--)
    {
        l=0;
        cin>>a>>b>>c;
        for(i=-22; i<=22; i++)
        {
            if(i*i <=c)
            {
                for(j=-100; j<=100; j++)
                {
                    if(j!=i && i*i + j*j <= c)
                    {
                        for(k=-100; k<=100; k++)
                        {
                            if(i+j+k == a && i*j*k == b && (i*i)+(j*j)+(k*k) == c && i!=j && j!=k && i!=k)
                            {
                                l=1;
                                cout<<i<<" "<<j<<" "<<k<<endl;
                                break;
                            }
                        }
                        if(l)
                            break;
                    }
                }
                if(l)
                    break;
            }
        }
        if(l==0)
            cout<<"No solution."<<endl;
    }

    return 0;
}

