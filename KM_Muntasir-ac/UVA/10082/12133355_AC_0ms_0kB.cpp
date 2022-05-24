#include<iostream>
using namespace std;

int main()
{
    string p = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;

    while(getline(cin,str))
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ')
                cout<<str[i];
            else
            {
                for(int j=0;j<p.size();j++)
                {
                    if(p[j]==str[i])
                    {
                        cout<<p[j-1];
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
