#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    int n,i,c,t,tc=1,f,k,l,j;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        f = 1;
        for(k=0; k<5; k++)
        {
            c=1;
            for(i=0; i<5; i++)
            {
                cin>>s;
                if(s == '|')
                    c=0;
                else if(s == '>' && c==0)
                    f=0;
                else if(s == '<' && c==1)
                    f=0;
            }
        }
        if(f)
            cout<<"Case "<<tc++<<": Thik Ball"<<endl;
        else
            cout<<"Case "<<tc++<<": No Ball"<<endl;
    }
    return 0;
}
