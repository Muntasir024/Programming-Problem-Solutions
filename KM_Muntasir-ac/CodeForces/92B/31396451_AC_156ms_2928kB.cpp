#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0, t, i, j = -1;
    string s;
    cin>>s;
    n = s.size();

    if(s == "1")
    {
        cout << "0" << endl;
        return 0;
    }

    for(i=n-1;i>=1;)
    {
        if(s[i] == '0')
        {
            c++;
            i--;
        }
        else
        {
            c++;
            j = i;
            while(s[j] == '1')
            {
                if(j == 0)
                {
                    s="1"+s;
                    c++;
                    break;
                }
                j--;
            }
            //cout<< i<<" "<<j<<endl;
            s[j] = '1';
            c += (i-j);
            i = j;
        }
    }
    cout << c << endl;
  //  main();
}